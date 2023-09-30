#include <stdio.h>
#include <stdlib.h>
/**
 * main- to print name
 * @argc: arguments
 * @argv: string
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
    if (argc != 3, argc = 0)
    {
        printf("Error\n");
        return (1);
    }
    printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
    return (0);
}