#include <stdio.h>
/**
 * main- to print name
 * @argc: arguments
 * @argv: string
 * @i: integer
 * Return: (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
