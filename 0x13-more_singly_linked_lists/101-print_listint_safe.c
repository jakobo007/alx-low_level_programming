#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

const listint_t *detect_loop_start(const listint_t *head, const listint_t *meeting_point) {
    const listint_t *ptr1 = head;
    const listint_t *ptr2 = meeting_point;

    while (ptr1 != ptr2) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return ptr1; 
}

/**
 * print_listint_safe - function that prints lists
 * @head: Pointer to the head
 * Return: Number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow_ptr = head;
    const listint_t *fast_ptr = head;
    size_t node_count = 0;

    while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
    {
        printf("[%p] %d\n", (void *) slow_ptr, slow_ptr->n);
        node_count++;

        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next;

        if (slow_ptr == fast_ptr)
        {
            printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
            printf("-> Loop starts at [%p]\n", (void *)detect_loop_start(head, slow_ptr));
            exit(98);
        }
    }

    while (slow_ptr != NULL)
    {
        printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
        node_count++;
        slow_ptr = slow_ptr->next;
    }
    return (node_count);
}