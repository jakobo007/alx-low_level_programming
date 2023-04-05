#include "lists.h"
/**
 * sum_listint - Calculate sum of all the data
 *
 * @head: Head Pointer
 *
 * Return: Sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


