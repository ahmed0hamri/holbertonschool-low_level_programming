#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len -print linked list
 * @h: string
 * Return: i
 */

list_t *add_node_end(list_t **head, const char *str)
{
    int len = 0;
    list_t *ptr;
    list_t *add_node_end = malloc(sizeof(list_t));
    printf("test");
    if (add_node_end == NULL)
    {
        return (NULL);
    }
    printf("MALLOC SUCCESSFUYL");
    add_node_end->str = strdup(str);
    if (add_node_end->str == NULL)
    {
        free(add_node_end);
        return (NULL);
    }

    len = strlen(add_node_end->str);
    add_node_end->len = len;
    add_node_end->next = NULL;
    ptr= *head;
    while (ptr->next!=NULL)
        ptr = ptr->next;
    printf("%s",ptr->str);
    ptr->next = add_node_end;
    return (add_node_end);
}
