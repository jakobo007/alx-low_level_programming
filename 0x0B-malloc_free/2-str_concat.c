#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function prototype
 * @s1: first string
 * @s2: second string
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
size_t x, y, i, j;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
x = 0;
while (s1[x] != '\0')
{
x++;
}
y = 0;
while (s2[y] != '\0')
{
y++;
}
ptr = malloc(sizeof(char) * (x + y + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < x; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j <= y; j++)
{
ptr[i] = s2[j];
i++;
}
return (ptr);
}
