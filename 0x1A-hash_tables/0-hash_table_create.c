#include "hash_tables.h"

/**
 * hash_table_create -
 *
 * Return: 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = NULL;
    
    table = malloc(sizeof(hash_table_t));
    if (!table)
    {
        return NULL;
    }

    table->array = malloc(sizeof(table->array) * size);
    if (!table->array)
    {
        free(table);
        return NULL;
    }

    table->size = size;
    return (table);
}