#include "main.h"
/**
 * prime_calc - fuction to calculate prime
 * @x: number
 * @y: divisor
 * Return: prime value or not
*/
int prime_calc(int x, int y)
{
if (x  <= 1 || (x != y && x % y == 0))
{
return (0);
}
else if (x == y)
{
return (1);
}
return (prime_calc(x , y + 1));
}
/**
 * is_prime_number - function prototype
 * @n: value
 * Return: prime number or 0
*/
int is_prime_number(int n)
{
return (prime_calc(n, 2));
}