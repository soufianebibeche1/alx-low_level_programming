#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to to list.
 *
 * Return: the head node if the list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int hnode;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	hnode = temp->n;
	*head = temp->next;
	free(temp);

	return (hnode);
}
