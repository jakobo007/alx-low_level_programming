#include <stdio.h>
#include "main.h"
/**
 * binary_to_unit -  function to convert binary to unsigned 
 * @b: A pointer to a string of 0 and 1
 * Return: The converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b == '0' || *b == '1')
{
result =result *2 + (*b - '0');
}
else
{
return (0);
}
b++;
}
return (result);
}
