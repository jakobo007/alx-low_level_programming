#include "lists.h"
/**
 * delete_nodeint_at_index - Delete index
 *
 * @head: Head pointer
 *
 * @index: Index of deleted node
 *
 * Return: 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int x;
	/**
	 * x is node
	 */
	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (x = 0; x < (index - 1); x++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	tmp =copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
