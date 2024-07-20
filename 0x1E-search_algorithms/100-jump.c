#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - jump search algo function
 * @array: pointer to first element of array
 * @size: length of the array
 * @value: search value
 * 
 * Return: Search value
*/
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev;
    size_t i;

    if (!array)
        return (-1);

    step = sqrt(size);
    prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
        if (prev >= size - step)
        {
            printf("Value checked array[%ld] = [%d]\n", prev + step, array[prev + step >= size ? size - 1 : prev + step]);
            break;
        }
        prev += step;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);

    for (i = prev - step + 1; i <= prev && i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}