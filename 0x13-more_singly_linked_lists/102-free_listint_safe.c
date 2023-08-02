#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free lists with a loop
 * @h: points to first node a list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size_freed = 0;
	int x;
	listint_t *temp;

	if (h != NULL || *h != NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size_freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size_freed++;
			break;
		}
	}

	*h = NULL;
	return (size_freed);
}
