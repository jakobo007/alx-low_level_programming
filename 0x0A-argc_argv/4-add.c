#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - to add numbers
 * @argc: arguments
 * @argv: string
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
    int i, j, add=0;
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i] [j] != '\o'; j++)
        {
            if (!isdigit(argv[i] [j]))
            {
                printf("Error\n");
                return (1);
            }
        }
        add += atoi(argv[i]);
    }
    printf ("&d\n", add);
    return (o);
}
