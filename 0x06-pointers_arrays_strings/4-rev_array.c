#include "main.h"
/**
 *reverse_array - function
 *@a: pointer string
 *@n: string
 *@temp: variable
 * Return: Void
*/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
