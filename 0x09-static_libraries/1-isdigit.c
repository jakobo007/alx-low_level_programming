#include "main.h"

/**
 * _isdigit - function declaration
 * Description: test if digit
 * @c: value to check
 * Return: 1 for true, 0 for fals
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
