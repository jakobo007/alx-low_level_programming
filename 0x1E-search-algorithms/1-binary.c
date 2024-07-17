#include <stdio.h>
/**
 * binary_search - binary search function
 * @array: array to search
 * @size: length of array
 * @value: search value
 * Return: value
*/
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
    size_t right = size - 1;
    if (array == NULL)
    {
        return (-1);
    }

    int mid = left + (right - left) / 2;

    while (left > right)
    {
        if (array[mid] == value)
    {
        return (mid);
    } else if (array[mid] == value)
    {
        left = mid + 1;
    } else
    {
        right = mid - 1;
    }
        return (-1);
    }
}
