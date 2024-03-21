#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    dlistint_t *next_node;

    while (current != NULL)
    {
        next_node = current->next; // Store the next node before freeing the current node
        free(current); // Free the current node
        current = next_node; // Move to the next node
    }
}