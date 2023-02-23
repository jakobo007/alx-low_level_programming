#include "main.h"
#include <stdio.h>
/**
 * int _isupper - function that checks for uppercase character.
 *@c: variable
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
