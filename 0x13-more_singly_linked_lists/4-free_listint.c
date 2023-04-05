#include "lists.h"
/**
 * free_listint - Freaas a list
 *
 * @head: Head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
