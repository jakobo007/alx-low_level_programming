#include "lists.h"
/**
 * add_nodeint_end - Add node at end of list
 * @head: Pointer to head adress
 * @n: Interger
 * Return: new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *j, *w;
	/**
	 * j is new
	 * w is last
	 */
	j = malloc(sizeof(listint_t));
	
	if (j == NULL)
		return (NULL);
	
	j->n = n;
	j->next = NULL;

	if (*head == NULL)
		*head = j;

	else
	{
		w = *head;
		while (w->next != NULL)
			w = w->next;
		w->next = j;
	}
	return (*head);

}
