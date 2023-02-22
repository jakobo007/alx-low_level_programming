#include "main.h"
/**
 * 10x -prints 10 times the alphabet, in lowercase, followed by a new line
 * 
 * @c: parameter to be printed
 *
 * Return: 1 if it lowercase otherwise 0
 */
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 1; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
