#include "main.h"
/**
 * *_strcat - check the code
 * @dest: pointer string
 * @src: pointer
 * @p: variable
 * Return: Void
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p != '\0')
{
p++;
}
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
