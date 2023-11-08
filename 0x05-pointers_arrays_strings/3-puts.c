#include "main.h"

/**
 * _puts - function declaration
 * @str: string pointer
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
