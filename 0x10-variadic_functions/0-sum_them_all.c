#include "variadic_functions.h"
#include <stdarg.h>
/**
 * int_sum_them_all - function prototype
 * @n: number of arguments
 * Return sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i;
	unsigned int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args,int);
	}
	va_end(args);
	return sum;
}

