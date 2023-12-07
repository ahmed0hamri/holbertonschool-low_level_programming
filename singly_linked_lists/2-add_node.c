#include "lists.h"
/**
 * add_node -print linked list
 * @head: string
 * @str: char
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
    int len = 0;
    list_t *new_node = malloc(sizeof(list_t));

    if (!new_node)
    {
        free(new_node);
        return (NULL);
    }
    new_node->str = strdup(str);
    len = strlen(new_node->str);
    new_node->len = len;
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}
