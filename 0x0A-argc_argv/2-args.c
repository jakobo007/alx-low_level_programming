#include <stdio.h>
/**
 * main- to print name
 * @argc: arguments
 * @argv: string
 * @i: integer
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
