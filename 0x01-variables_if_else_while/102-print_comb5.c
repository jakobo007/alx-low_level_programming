#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - program that prints all possible combinations of two two-digit numbers range from 0 to 99.
*Return: always 0
*/
int main()
{
for (int i = 0; i <= 99; i++)
{
for (int j = i; j <= 99; j++)
{
int a = i / 10;
int b = i % 10;
int c = j / 10;
int d = j % 10;
putchar('0' + a);
putchar('0' + b);
putchar(' ');
putchar('0' + c);
putchar('0' + d);
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
return 0;
}
