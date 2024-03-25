#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all data
 * @head: pointer to head of list 
 * Return: Sum of the data(n)
 * */ 
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;
while(current != NULL)
{
sum += current->n;
current = current->next;
}
return sum;
}