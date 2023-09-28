#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function
 * 
 * @n: value 
 * 
 * Return: Square root of the value
*/

int _sqrt_recursion(int n)
{
    if ( n < 0)
    {
        return (-1);
    }
    else
    {
        return (_sqrt_recursion(n));
    }
}