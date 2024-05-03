#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: NULL if ht is empty
*/
void hash_table_print(const hash_table_t *ht)
{
 unsigned long int i = 0;
if (ht == NULL)
return;
printf("{\n");
for(i = 0; i < ht->size; i++)
{
hash_node_t *current = ht->array[i];
if (current != NULL)
{
printf("    [%lu]: ", i);
while (current != NULL)
{
printf("'%s': '%s'", current->key, current->value);
current = current->next;
if (current != NULL)
printf(", ");
}
printf("\n");
}
}
printf("}\n");
}
