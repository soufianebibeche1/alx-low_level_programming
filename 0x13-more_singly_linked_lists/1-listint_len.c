#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked listint_t list
 * @h: linked list.
 *
 * Return: the number of elements n a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t cpt = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		cpt++;
	}
	return (cpt);
}

