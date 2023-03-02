#include "main.h"
/**
 *string_toupper - function
 *@str: pointer string
 * Return: Void
*/
char *string_toupper(char *str)
{
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
