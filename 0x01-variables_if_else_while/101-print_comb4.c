#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - program that prints all possible different combinations of three digits
*Return: always 0
*/
int main(void)
{
for (int i = 0; i <= 7; i++)
{
for (int j = i+1; j <= 8; j++)
{
for (int k = j+1; k <= 9; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
return 0;
}
