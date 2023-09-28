#include "main.h"
/**
 * factorial - function
 * @n: value to factorize
 * Return: factor
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return ( n * factorial(n - 1));
}
