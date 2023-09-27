#include "main.h"
/**
 * _strlen_recursion - function declaration
 * @s: string value
 * Return: string length
*/
int _strlen_recursion(char *s);

int main(void)
{
    _strlen_recursion("Corbin Coleman");
}

int _strlen_recursion(char *s)
{
    int lenght = 0;
    if (*s)
    {
        lenght = _strlen_recursion(s + 1);
        return (lenght = lenght + 1);
    }
    return (0);
}