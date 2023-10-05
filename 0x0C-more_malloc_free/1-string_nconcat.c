#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function prototype
 * @s1:
 * @s2:
 * @n:
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t x, y, a;
char *s;
if (s1 == NULL)
x = 0;
else
{
for (x = 0; s1[x] != '\0'; x++)
;
}
if (s2 == NULL)
y = 0;
else
{
for (y = 0; s2[y] != '\0'; y++)
;
}
if (y > n)
y = n;
s = malloc(sizeof(char) * (x + y + 1));
if (s == NULL)
return (NULL);
for (a = 0; a < x; a++)
s[a] = s1[a];
for (a = 0; a < y; a++)
s[a + 1] = s2[a];
s[x + y] = '\0';
return (s);
}
