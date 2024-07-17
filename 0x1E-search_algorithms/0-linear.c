#include <stdio.h>
/**
 * linear_search - linea search fucntion
 * @array: array to loop
 * @size: size of the array
 * @value: search value
 * Return value
 * **/
int linear_search(int *array, size_t size, int value)
{
    size_t index;
    if (array == NULL)
    {
        return (-1);
    }

    for (index = 0; index < size; index++)
    {
        printf("Value checked array[%u] = [%d]\n", (unsigned int)index, array[index]);
        if (array[index] == value)
        {
            return (index);
        }
    }
    return (-1);
}
