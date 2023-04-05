#include "lists.h"
/**
 * listint_len - Returns the number of elements
 *
 * @h: Struct of traverse
 *
 * Return: amount of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;
	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
