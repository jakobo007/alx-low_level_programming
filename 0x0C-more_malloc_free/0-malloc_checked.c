#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function prototype
 * @b: input value
 * Return: Pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
    exit(98);
}
return (ptr);
}
