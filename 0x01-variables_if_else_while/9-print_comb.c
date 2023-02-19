#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - program that prints all possible combinations of single-digit numbers
*Return: always 0
*/
int main() {
int i, j;
for (i = 0; i < 10; i++) {
for (j = i; j < 10; j++) {
putchar(i + '0');
putchar(j + '0');
if (i != 9 || j != 9) {
putchar(',');           
}
}
}
putchar('\n');
return 0;
}