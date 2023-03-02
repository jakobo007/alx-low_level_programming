#include "main.h"
/**
 *string_toupper - function
 *@str: pointer string
 *@ptr: string
 *@islower: variable
 *@toupper: variable
 * Return: Void
*/
char *string_toupper(char *str)
{
int islower;
int toupper;
char *ptr = str;
while (*ptr != '\0')
{
if (islower(*ptr))
{
*ptr = toupper(*ptr);
}
ptr++;
}
return (str);
}
