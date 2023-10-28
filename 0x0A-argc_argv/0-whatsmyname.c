#include <stdio.h>
/**
 * main- to print name
 * @argc: arguments
 * @argv: string 
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
    printf("%s\n", argv[0]);
    return (0);
}
