#include "main.h"
/**
 * _pow_recursion - function
 * 
 * @x: intial value
 * @y: power value
 * 
 * Return: intial value raised to power value
*/

int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    } else if (y == 0)
    {
        return (1);
    }
    return (x * _pow_recursion(int x, int y - 1));
}