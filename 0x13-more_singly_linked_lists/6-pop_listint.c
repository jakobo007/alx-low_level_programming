#include "lists.h"
/**
 * pop_listint - Delete head node
 *
 * @head: head pointer
 *
 * Return: node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (*head == NULL)
	return (0);
	tmp = *head;
	x = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (x);


}
