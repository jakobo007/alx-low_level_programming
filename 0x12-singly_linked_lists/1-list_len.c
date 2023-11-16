#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - function to print elements of a linked list
 * @h: node head
 * Return: Elements in the list
*/
size_t list_len(const list_t *h)
{
size_t counter = 0;
while (h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
