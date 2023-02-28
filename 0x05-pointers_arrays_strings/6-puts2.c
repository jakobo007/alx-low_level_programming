#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - function declaration
 * @str: string pointer
 * Return: void
 */
void puts2(char *str)
{
	int index;

	for (index = 0; index < _strlen(str); index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
