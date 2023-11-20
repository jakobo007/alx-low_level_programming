#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node atha given position
 * @head: Double pointer to the head of the list
 * @idx: Position of the new node
 * @n: Value to be stored in the new node
 * Return: Address of the new  node and NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *add_node = malloc(sizeof(listint_t));
if (add_node == NULL){
return (NULL);
}
add_node->n = n;
if (idx == 0) {
add_node->next = *head;
*head = add_node;
return (add_node);
}
listint_t *current = *head;
unsigned int i = 0;
for(i = 0; i < idx - 1;i++)
{
if (current == NULL)
{
free(add_node);
return (NULL);
}
current =  current->next;
}
add_node->next = current->next;
current->next = add_node;
return (add_node);
}
