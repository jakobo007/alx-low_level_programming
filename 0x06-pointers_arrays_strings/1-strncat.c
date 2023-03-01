#include "main.h"
/**
 *_strncat - function
 *@dest: pointer string
 *@src: string
 *@n: variable
 * Return: Void
*/
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (n > 0 && *src != '\0')
{
*dest++ = *src++;
n--;
}
*dest = '\0';
return (result);
}
