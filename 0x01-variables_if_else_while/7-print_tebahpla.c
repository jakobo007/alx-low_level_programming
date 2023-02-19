#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - Print lowercase alphabets in reverse
*Return: always 0
*/
int main()
{
int i;
for (i = 25; i >= 0; i--)
{
putchar('a' + i);
}
putchar('\n');
return 0;
}