#include "main.h"
#include <stdio.h>
/**
 *_isupper - function that checks for uppercase character.
 *@c: variable
 * Return: Always 0.
 */
int _isupper(int c)
{
if ((c >= '0' && c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
