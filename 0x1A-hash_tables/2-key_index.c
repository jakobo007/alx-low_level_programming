#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * key_index - function that gives you index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: index at which the key/value pair
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
unsigned long int index =  hash_value % size;
return (index);
}
