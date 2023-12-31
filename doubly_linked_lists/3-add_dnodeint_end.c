#include "lists.h"
/**
 * add_dnodeint_end -  a function that adds a new node
 *  at the end of a dlistint_t list.
 * @head: pointer
 * @n: the value of the node
 *
 * Return:  new element address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	tp = *head;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else

	{
		while (tp && tp->next)
			tp = tp->next;

		tp->next = new_node;
		new_node->prev = tp;
	}
	return (new_node);
}

