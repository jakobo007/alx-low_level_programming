#include <stdio.h>
/**
 * main alphabets in UPPER and lowecase
 *Return: Always 0
*/
int main(){
int i;
for (i = 97; i <= 122; i++) {
putchar(i);
}
for(i = 65; i <= 90; i++){
putchar(i);
}
putchar('\n');
return (0);
}