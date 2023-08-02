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
	size_t cpt = 0;
	const listint_t *temp = head;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		cpt++;
		if (temp <= temp->next)
		{
			exit(98);
		}
		temp = temp->next;
	}
	return (cpt);
}
