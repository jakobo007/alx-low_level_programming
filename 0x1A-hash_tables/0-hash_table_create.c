#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_t *hash_table_create - function that create a hash table
 * @size: size of the array
 * Return: A pointer to a newly created has table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;
    hash_table_t *hash_table = malloc(sizeof(hash_table_t));
    hash_table->array = malloc(sizeof(hash_node_t));
    
    if (size == 0)
    return(NULL);

    
    if (hash_table == NULL)
    return(NULL);

    hash_table->size = size;

    
    if(hash_table->array == NULL)
    {
        free(hash_table);
        return(NULL);
    }

    for(i = 0; i < size; i++)
    {
        hash_table->array[i] = NULL;
    }
return(hash_table);
}
