#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: points to first node a list
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *q;

	if (head == NULL || head->next == NULL)
		return (NULL);

	p = head->next;
	q = (head->next)->next;

	while (q != NULL)
	{
		if (p == q)
		{
			p = head;
			while (p != q)
			{
				p = p->next;
				q = q->next;
			}
			return (p);
		}
		p = p->next;
		q = (q->next)->next;
	}

	return (NULL);
}
