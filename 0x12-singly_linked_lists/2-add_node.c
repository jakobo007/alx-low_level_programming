#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function to add new node to a list
 * @head: pointer to the head of the linked list
 * @str: string to be duplicated in the new node
 * Return: New node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
return (NULL);
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
