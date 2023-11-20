#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the npde at the index
 * @head: Double pointer to the head of the pointer
 * @index: Position of the node to be deleted
 * Return: 1 if it succedes and -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (*head == NULL) {
    return (-1);
}
listint_t *holder, *last;
unsigned int i;
if (index == 0) {
holder = *head;
*head = (*head)->next;
free(holder);
return (1);
}
last = *head;
for (i = 0; i < index - 1 && last != NULL; i++) {
    last = last->next;
}
if (last == NULL || last->next == NULL) {
    return (-1);
}
holder = last->next;
last->next = holder->next;
free(holder);
}
