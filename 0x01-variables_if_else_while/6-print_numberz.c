#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - Print lowercase alphabets
*Return: always (0)
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
}
return (0);
}
