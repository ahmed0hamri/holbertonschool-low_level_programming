#include "lists.h"
/**
 * add_dnodeint - check the code
 * @head: list
 * @n: int
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *tp;
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;

        while (tp && tp->next)
            tp = tp->next;

    tp->next = new_node;
    new_node->prev = tp;
    return (new_node);
}
