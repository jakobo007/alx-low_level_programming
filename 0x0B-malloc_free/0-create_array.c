#include "main.h"
#include <stdlib.h>
/**
 * create_array - function prototype
 * @size: input of array
 * @c: pointer of input
 * @i: unput value
 * 
 * Return: pionter
*/

char *create_array(unsigned int size, char c)
{
    size_t k;
    char *ptr;

    if (size == 0)
    {
        return (NULL);
    }
    ptr = malloc(sizeof(char) * size);
    if (ptr == NULL)
    {
        return (NULL);
    }
    for ( k = 0; k < size; k++)
    {
        ptr[k] = c;
    }
    return (ptr);
}