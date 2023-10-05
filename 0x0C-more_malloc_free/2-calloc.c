#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function prototype
 * @nmemb: array
 * @size: bytes of array
 * Return: pointer of the alocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
size_t y;
if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(nmemb * size);
if (x == NULL)
return (NULL);
for (y = 0; y < (nmemb * size); y++)
x[y] = 0;
return (x);
}
