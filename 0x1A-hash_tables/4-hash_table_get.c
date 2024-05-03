#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * char *hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with the element or NULL if the key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key) {
    if (ht == NULL || key == NULL || *key == '\0')
        return NULL;

    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    hash_node_t *current = ht->array[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }

    return NULL;  // Key not found
}
