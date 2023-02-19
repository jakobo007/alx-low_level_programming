#include <stdio.h>
/*betty style doc for function main goes there */
/**
*main - Print alphabets
*Return: always 0
*/
int main() {
int i;
for (i = 97; i <= 122; i++) {
putchar(i);
}
putchar('\n');
return 0;
}
