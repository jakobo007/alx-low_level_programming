#include "main.h"
/**
 * raised_power - function for natural sqaure root
 * @j: input value
 * @k: raise power value
 * Return: Square root
*/


int raised_power(int j, int k )
{
    if (k * k == j)
    {
        return (k);
    }
    else if (k * k > j)
    {
        return (-1);
    }
    return (raised_power(j, k + 1));
}

/**
 * _sqrt_recursion - function
 * @n: value 
 * Return: Square root of the value
*/

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    return (_sqrt_recursion(n, 0));
}