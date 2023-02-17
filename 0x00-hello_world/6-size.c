#include <stdio.h>
/**
*main - Size is not grandeur, and territory does not make a nation
*Return: Always (0).
*/
int main(void)
{
    printf("The size of char is %d bytes\n", sizeof(char));
    printf("The size of int is %d bytes\n", sizeof(int));
    printf("The size of long int is %d bytes\n", sizeof(long int));
    printf("The size of long long int is %d bytes\n", sizeof(long long int));
    printf("The size of float is %d bytes\n", sizeof(float));
    return 0;
}