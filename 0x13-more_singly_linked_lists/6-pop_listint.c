#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head of a node
 * @head: Double pointer to the head of the node
 * Return: The head of the node's data and 0 if the node is empty
*/
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;
if (*head == NULL)
return (0);
data = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return data;
}
