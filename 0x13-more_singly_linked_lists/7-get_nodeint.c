#include "lists.h"
/**
 * get_nodeint_at_index - Locate node
 *
 * @head: Pointer head
 *
 * @index: INdex of node
 *
 * Return: Located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;
	/**
	 * b is node
	 */
	for (b = 0; b < index; b++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
