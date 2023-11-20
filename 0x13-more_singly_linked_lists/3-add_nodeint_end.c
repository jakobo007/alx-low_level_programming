#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_nodeint_end - function that add new node at the end of the list
 * @head: double pointer to the head of the list
 * @n: number of elements in the list
 * Return: Address of the new element and NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node_end = malloc(sizeof(listint_t));
if (new_node_end == NULL)
{
return (NULL);
}
new_node_end->n = n;
new_node_end->next = NULL;
if (*head == NULL)
{
*head = new_node_end;
} else {
listint_t *x = *head;
while(x->next != NULL)
{
x = x->next;
}
x->next = new_node_end;
}
return (new_node_end);
}
