#include "main.h"

/**
 * *_memset - function declaration
 * @s: pointer to constant
 * @b: constant
 * @n: number of bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}

