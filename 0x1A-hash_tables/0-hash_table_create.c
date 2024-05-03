#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_t *hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: A pointer to new hash table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;
    hash_table_t *hash_table = malloc(sizeof(hash_table_t));

    if (hash_table == NULL)
    {
        return(NULL);
    }

    hash_table->size = size;
    hash_table->array = malloc(size * sizeof(hash_node_t *));

    if (hash_table->array == NULL)
    {
        free(hash_table);
        return(NULL);
    }

    for (i = 0; i < size; i++)
    {
        hash_table->array[i] = NULL;
    }

    return(hash_table);
}
