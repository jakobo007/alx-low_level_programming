#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if in alphabet
 * @c: arguement as integer
 * Description: check if c is in alphabet
 * Return: void
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
