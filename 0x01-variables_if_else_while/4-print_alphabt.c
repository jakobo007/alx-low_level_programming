#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - Print lowercase alphabets
*Return: always (0)
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i != 101 && i != 113)
putchar(i);
}
putchar('\n');
return (0);
}
