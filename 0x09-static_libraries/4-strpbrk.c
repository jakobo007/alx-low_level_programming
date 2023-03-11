#include "main.h"

/**
 * *_strpbrk - function declaration
 * @s: string to search
 * @accept: bytes to search
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int str_index;
	int sub_str_index;

	for (str_index = 0; s[str_index] != '\0'; str_index++)
	{
		for (sub_str_index = 0; accept[sub_str_index] != '\0'; sub_str_index++)
		{
			if (s[str_index] == accept[sub_str_index])
			{
				return (s + str_index);
			}
		}
	}
	return (0);
}

