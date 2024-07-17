#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints the current part of the array being searched
 * @array: Pointer to the first element of the array to print
 * @left: Starting index of the subarray to print
 * @right: Ending index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right) {
    
	size_t i;
	printf("Searching in array: ");
    for ( i = left; i <= right; i++) {
        printf("%d", array[i]);
        if (i < right) {
            printf(", ");
        }
    }
    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * 
 * Return: Index where value is located, or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value) {
	size_t mid;
	size_t left =0;
	size_t right = size - 1;
    if (array == NULL) {
        return -1;
    }


    while (left <= right) {
        print_array(array, left, right);

        mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

