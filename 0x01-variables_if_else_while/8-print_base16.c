#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - program that prints all the numbers of base 16 in lowercase, followed by a new line
*Return: always (0)
*/
int main(void) 
{
int i;
for (i = 0; i < 10; i++) 
{
putchar('0' + i);
}
for (i = 0; i < 6; i++)
{
putchar('a' + i);
}
putchar('\n');
return (0);
}
