#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list
 * @h: Pointer to the head of the linked list.
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t nb_nodes = 0;

	while (h != NULL)
	{
		nb_nodes++;
		h = h->next;
	}

	return (nb_nodes);
}
