#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function prototype
 * @str: input
 * 
 * Return: memory pointer
*/
char *_strdup(char *str)
{
	size_t i, j;
	char *x;

	if (str ==NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	x = (char *)malloc(sizeof(char) * (i + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		x[j] = str[j];
	}
	return (x);
}

