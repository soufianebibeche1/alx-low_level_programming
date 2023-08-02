#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: points to first node a list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p, *loop, *temp;	
	size_t len;
	int l = 1;

	if (head == NULL)
		return (0);

	loop = NULL;
	for (p = head->next; p != NULL; p = p->next)
	{
		if (p == p->next)
		{
			loop = p;
			break;
		}
		for (temp = head; temp != p; temp = temp->next)
		{
			if (temp == p->next)
			{
				loop = p->next;
				break;
			}
		}
		if (loop != NULL)
			break;
	}

	for (len = 0; (head != loop || l) && head != NULL; head = head->next)
	{
		len++;
		printf("%d\n", head->n);
		if (head == loop && l)
		{
			if (loop == loop->next)
			{
				break;
			}
			len++;
			printf("%d\n", head->next->n);
			l = 0;
		}
	}

	return (len);
}
