#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - program that prints all possible combinations of single-digit numbers
*Return: always 0
*/
int main() {
int i;
for (i = 0; i < 9; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
return 0;
}
