#include "main.h"
/*betty style doc for function main goes there */
/**
*main - 10x void print_alphabet_x10(void)
*Return: always (0)
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
