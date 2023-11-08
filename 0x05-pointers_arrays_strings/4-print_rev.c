#include "main.h"
#include <string.h>
#include "2-strlen.c"

/**
 * print_rev - function declaration
 * @s: string pointer
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s);
	for(int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
