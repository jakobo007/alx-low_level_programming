#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at index
 * @head: pointer to pointer to head of the list
 * @index: index of nodes in the list 
 * Return: 1 or -1 
 * */ 

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
if (*head == NULL)
{
return -1;
}
if (index == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
}
free(current);
return -1;
}