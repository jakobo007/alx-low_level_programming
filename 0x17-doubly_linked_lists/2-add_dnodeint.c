#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        /* Allocation failed, return NULL */
        return NULL;
    }

    /* Set the value of the new node */
    new_node->n = n;

    /* Update pointers to link the new node */
    new_node->prev = NULL;
    new_node->next = *head;

    /* Update head pointer if the list is not empty */
    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    /* Update head pointer to point to the new node */
    *head = new_node;

    return new_node;
}