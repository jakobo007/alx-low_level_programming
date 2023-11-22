#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function to print a list
 * @h: first node of the list
 * Return: All the elements of the list
*/
size_t print_listint(const listint_t *h)
{
size_t nodes = NULL;
while (h != NULL)
{
printf("%d\n", h->n);
nodes = h;
h = h->next;
nodes++;
}
return (nodes);
}
