#include "main.h"
#include <stdio.h>
/**
 *_strncat - function
 *@dest: pointer string
 *@src: string
 *@i: variable
 * Return: Void
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
    return (dest);
}
