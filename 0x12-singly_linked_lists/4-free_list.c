#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - funtion to free list
 * @head: Pointer to the list head 
 * Return: free list 
*/
void free_list(list_t *head)
{
while (head != NULL)
{
list_t *x = head;
head = head->next;
free(x->str);
free(x);
}    
}
