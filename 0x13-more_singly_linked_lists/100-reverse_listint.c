#include "lists.h"
/**
 * reverse_listint - Reverse the list
 *
 * @head: Pointer head
 *
 * Return: A pointer to the first node
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *f, *j;
	/**
	 * f is ahead
	 * j is behind
	 */
	if (head == NULL || *head == NULL)
		return (NULL);

	j = NULL;

	while ((*head)->next != NULL)
	{
		f = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = f;
	}

	(*head)->next = j;

	return (*head);

}
