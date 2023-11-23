#include <stdio.h>
#include "main.h"
/**
 * print_binary - function to print binary representation of a number
 * @n: The number to be printed in the library
 * Return: The binary representation
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
