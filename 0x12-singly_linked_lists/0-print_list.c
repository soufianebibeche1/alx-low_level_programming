#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer to the head of the linked list.
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nb_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		nb_nodes++;
		h = h->next;
	}

	return (nb_nodes);
}
