#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function to get node at index
 * @head: pointer to head of the list
 * @index: node index
 * 
 * Return: pointer to nth node or NULL
 * */ 
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
