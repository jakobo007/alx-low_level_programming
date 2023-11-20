#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_lisint - function to get the sum of all the data in a linked list
 * @head: pointer to the head of the linked list
 * Return:  0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while(head != NULL)
{
    sum += head->n;
    head = head->next;
}
return (sum);
}
