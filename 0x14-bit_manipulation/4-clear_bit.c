#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set value of bit to 0
 * @n: Pointer to the number 
 * @index: Index of the bit to clear
 * Return: 1 if it worked else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return -1;
*n = *n & ~(1UL << index);
return 1;
}
