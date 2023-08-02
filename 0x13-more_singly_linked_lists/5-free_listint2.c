#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to to list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
}
