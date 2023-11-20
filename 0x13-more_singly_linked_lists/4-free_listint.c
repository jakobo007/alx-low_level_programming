#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function to free list
 * @head: pointer to head of the list
 * Return: Freed list
*/
void free_listint(listint_t *head)
{
listint_t *counter;
while (head != NULL)
{
counter = head;
head = head->next;
free(counter);
}
}
