#include "main.h"

/**
 * _last_digit - prints the last digit of a number
 *
 * @x: function parameter
 * 
 * Return: y.
 */
int print_last_digit(int x)
{
int y;
y = x % 10;
if (x < 0)
y = -y;
_putchar(y + '0');
return (y);
}
