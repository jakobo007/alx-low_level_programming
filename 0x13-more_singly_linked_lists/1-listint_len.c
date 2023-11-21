#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len -  function to  return the number of elements in a linked list
 * @h: pointer to head of the node
 * Return: Number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
size_t counter = 0;
while (h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
