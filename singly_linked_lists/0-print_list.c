#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -print linked list
 * @h: string - (malloc'ed string)
 * return: i
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	if (!h)
	{
		return (0);
	}

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
