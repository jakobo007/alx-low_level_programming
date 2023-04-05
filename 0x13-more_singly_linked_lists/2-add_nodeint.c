#include "lists.h"
/**
 * add_nodeint - Add node at beginnign of a list
 *
 * @head: Pointer to the address of head of the list
 *
 * @n: Interger
 *
 * Return: List
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new ->n = n;
	new ->next = *head;
	*head = new;
	return (new);
}
