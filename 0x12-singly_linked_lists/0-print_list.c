#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - function to print all the elements
 * @h: the first node of the list
 * Return: All the elements in the list
*/

size_t print_list(const list_t *h)
{
    size_t counter = 0;
    while(h != NULl)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }

        h = h->next;
        counter++;
    }
    return (counter);
}