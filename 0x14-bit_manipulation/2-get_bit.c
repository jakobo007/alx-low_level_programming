#include <stdio.h>
#include "main.h"
/**
 * get_bit - funtion that returns value of a bit 
 * @n: The number to extract the bit from
 * @index: index of the bit to get
 * Return: The value of the bit at the given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int)* 8))
return (-1);
return (int)((n >> index) & 1);
}
