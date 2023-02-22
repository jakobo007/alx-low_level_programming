#include "main.h"
/**
 * print_sign - function that prints lowercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 and prints + if n is greater than zero 
 */
int print_sign(int n)
{
if (n > 0)
{
pritnf("+, ")
return (1);
}
else if (n == 0)
{
printf("0, ")
return (0);
}
else
{
printf("-, ")
return (-1);
}
}
