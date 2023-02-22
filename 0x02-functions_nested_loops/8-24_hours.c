#include "main.h"

/**
 * void jack_bauer(void) - prints every minute of the day  
 * 
 * Return: Always (0).
 */
void jack_bauer(void)
{
int j, i;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
_putchar(i / 10 + '0');
_putchar(1 % 10 + '0');
_putchar(':');
_putchar(j / 10 '0');
_putchar('\n');
}
}
}
