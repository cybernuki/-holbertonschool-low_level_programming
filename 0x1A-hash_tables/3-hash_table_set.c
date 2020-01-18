#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key to be added
 * @value: is the value corresponding to the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL, *node = NULL;
    unsigned long int index;

    if (!ht)
        return (0);

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);
    new_node->key = (char *) key;
    new_node->value = (char *) value;

    index = key_index(key, ht->size);
    node =  ht->array[index];
    while(node)
        node = node->next;
    if (!node)
        node = new_node;
    else
        node->next = new_node;
    return (1);
}