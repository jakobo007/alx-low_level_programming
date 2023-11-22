#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - function to free list
 * @head: double pointer to the head of the list
 * Return: freed list
*/
void free_listint2(listint_t **head)
{
listint_t *counter, *holder;
counter = *head;
while (counter !=  NULL)
{
holder = counter;
counter = counter->next;
free(holder);
}
*head = NULL;
}
