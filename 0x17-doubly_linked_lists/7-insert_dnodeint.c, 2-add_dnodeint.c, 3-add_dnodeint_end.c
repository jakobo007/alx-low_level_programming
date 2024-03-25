#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL || idx < 0)
    {
        return NULL;
    }

    dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return NULL;
    }

    newNode->n;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (*h == NULL)
    {
        *h = newNode;
        return newNode;
    }

    if (idx == 0)
    {
        newNode->next = *h;
        (*h)->next = newNode;
        *h = newNode;
        return newNode;
    }

    dlistint_t *current = *h;
    unsigned int count = 0;

    while(current != NULL && count < idx - 1)
    {
        current = current->next;
        count++;
    }

    if (current == NULL || count < idx - 1)
    {
        free(newNode);
        return NULL;
    }

    newNode->next = current->next;
    if (current->next != NULL)
    {
        current->next->prev = newNode;
    }
    current->next = newNode;
    newNode->prev = current;

    return newNode;
}