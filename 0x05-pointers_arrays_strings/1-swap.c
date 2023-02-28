#include "main.h"
void swap_int(int *a, int *b)
{
	int placeholder1 = *a;
	int placeholder2 = *b;
	*a = placeholder2;
	*b = placeholder1;
}