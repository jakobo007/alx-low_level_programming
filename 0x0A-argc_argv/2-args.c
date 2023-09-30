#include <stdio.h>
/**
 * main- to print name
 * @argc: arguments
 * @argv: string
 * @i: integer
 * Return: (0)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, *argv[i]);
    }
    return 0;
}
