#include <stdio.h>
/**
*main - Size is not grandeur, and territory does not make a nation
*Return: Always (0).
*/
int main(void)
{
    printf("size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int %zu byte(s)\n", sizeof(long int));
    printf("Size of long long int %zu byte(s)\n", sizeof(long long int));
    printf("Size of float %zu byte(s)\n", sizeof(float));
    return 0;
}