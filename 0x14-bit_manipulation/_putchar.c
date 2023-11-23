#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints a character
 * @c: the character to be printed
 * Return: The character
*/
int _puutchar(char c)
{
return write(1, &c, 1);
}
