#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - Print lower and uppercase alphabets
*Return: always (0)
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (i = 65; i <= 90; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
