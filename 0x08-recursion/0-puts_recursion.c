#include "main.h"
/**
 * _puts_recursion - function
 * @s: the string
 */
void _puts_recursion(char *s);
/**
 * _puts_recursion - function definition
 * @s: the string to recurse
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
