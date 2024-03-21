#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t counter = 0;
    while (h != NULL) {
        if (h->str == NULL)
        {
            printf("[%u] %s\n", h->len, h->str);
        }

        h = h->next;
        counter++;
    }
    return (counter);
}