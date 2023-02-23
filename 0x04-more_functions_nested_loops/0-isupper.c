#include "main.h"
#include <stdio.h>
/**
 *_isupper - function that checks for uppercase character.
 *@c: variable
 * Return: Always 0.
 */
int _isupper(int a)
{
if (a == 0 || (a >= 1 && a <= 9))
{
return (1);
}
else
{
return (0);
}
}
