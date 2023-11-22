#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * reverse_listint - function to print list in reverse
 * @head: Double pointer to the first node
 * Return: A pointer to the first node of the list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
while (current != NULL)
{
listint_t *next_node;
next_node = current->next;
current->next = prev;
prev = current;
current =  next_node;
}
*head = prev;
return (*head);
}
