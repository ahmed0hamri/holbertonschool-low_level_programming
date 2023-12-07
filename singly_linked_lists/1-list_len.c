#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len -print linked list
 * @h: string
 * Return: i
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{

		h = h->next;
		i++;
	}
	return (i);
}
