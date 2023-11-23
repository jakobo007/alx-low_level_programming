#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets value of a bit at given index to 1
 * @n: pointer to the numer where the bit should be set
 * @index: index of the set bit
 * Return: 1 if it worked, otherwise -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int)* 8))
return (-1);
*n = *n | (1UL << index);
return (1);
}
