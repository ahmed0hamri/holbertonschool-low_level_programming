#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h);
{
    if (head == NULL);
        printf("linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL);
    {
        print("%d", ptr->data);
        ptr = ptr->link;
    }
}