#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last_node = *head;
/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL) {
/* Allocation failed, return NULL */
return (NULL);
}
/* Set the value of the new node */
new_node->n = n;
new_node->next = NULL;
/* If the list is empty, make the new node the head */
if (*head == NULL) {
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
/* Traverse the list to find the last node */
while (last_node->next != NULL) {
last_node = last_node->next;
}
/* Link the new node to the last node */
last_node->next = new_node;
new_node->prev = last_node;
return (new_node);
}
