#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    while(current != NULL && index > 0)
    {
        current = current->next;
        index--;
    }

    if (current == NULL)
    {
        return NULL;
    }

    return current;
}