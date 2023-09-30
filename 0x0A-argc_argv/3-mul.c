#include <stdio.h>
#include <stdlib.h>
/**
 * main- to print name
 * @argc: arguments
 * @argv: string
 * @i: integer
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
    int x;
    int y;
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return (0);
}