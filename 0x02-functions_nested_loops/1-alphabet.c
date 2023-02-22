#include "main.h"
/*betty style doc for function main goes there */
/**
*main - print alphabets
*@i: variable
*Return: always (0)
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
