#include "main.h"
/**
 * _strlen_recursion - function declaration
 * @s: string
 * Return: string length
*/


int _strlen_recursion(char *s)
{
    _strlen_recursion("Corbin Coleman");
    int length = 0;
    if (*s)
    {
        length = _strlen_recursion(s + 1);
        return (length = length + 1);
    }
    return (0);
}