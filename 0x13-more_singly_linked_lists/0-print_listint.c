#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * size_t print_listint(const listint_t *h) function that will print the elements insdie a list
 * @h: first node of the list
 * Return: All the elements of the list
*/
size_t print_listint(const listint_t *h)
{
    size_t nodes = 0;
    while(h == NULL)
    {
        printf("Error\n");
        if (head == NULL)
        {

        } else {
        h = h->next;
        nodes++;
        }
    }
    return (nodes);
}