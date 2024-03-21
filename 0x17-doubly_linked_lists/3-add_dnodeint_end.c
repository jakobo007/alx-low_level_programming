#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->n = n;
    new_node->prev = *head;
    new_node->next = NULL;

    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    /* Update head pointer to point to the new node */
    *head = new_node;

    return new_node;
}