#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: pointer to to list.
 *
 * Return: returns the sum of all the data
 * (n) in a list if lists empty returns 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
