#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    int i = 0;
    if (h == NULL)
    printf("[0] (nil)\n");

    while (h != NULL)

    {
        printf("[%d] %s\n", h->len, h->str);
        h = h->link;
        i++
            h = h->next;
    }
    return (i)
}
