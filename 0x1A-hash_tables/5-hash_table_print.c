#include "hash_tables.h"

/**
 * hash_table_print -
 *
 * Return: 
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;
    size_t i = 0, first = 1;

    printf("{");
    if (ht)
    {
        for (i = 0; i < ht->size; i++)
        {
            node = ht->array[i];
            while(node)
            {
                if (first)
                    first = 0;
                else
                    printf(", ");
                printf("'%s': '%s'", node->key, node->value);
                node = node->next;
            }
        }
    }
    printf("}\n");
}