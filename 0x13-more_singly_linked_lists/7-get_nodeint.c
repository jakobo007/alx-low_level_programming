#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function to return the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: position of the node to be retrieved
 * Return: NULL if the node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
while (head != NULL)
{
if (count == index)
return (head);
head = head->next;
count++;
}
return (NULL);
}
