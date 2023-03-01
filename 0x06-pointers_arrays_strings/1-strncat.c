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
char dest[50] = "Hello, ";
char src[] = "world!";

_strncat(dest, src, 5);  // concatenate at most 5 characters from src to dest

printf("%s\n", dest);   // prints "Hello, world"
}