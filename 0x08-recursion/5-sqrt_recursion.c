#include "main.h"
/**
 * root - square root
 * @y: input value
 * @z: raise value
 *Return: sqaure root
*/
int root(int y, int z);
{
    if (z * z == y)
    {
        return (y);
    }
    else if (z * z > y)
    {
        return (-1);
    }
    return (root(z, y + 1));
}

/**_sqrt_recursion - return square root
 * @n: input
 * Return: sqaure root
*/
int _sqrt_recursion(int n);
{
    return (root(n, 0));
}
