#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index at which to insert the new node (starting from 0)
 * @n: Value to be stored in the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;

	/* If index is 0, call add_dnodeint to insert at the beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		idx--;
	}

	/* If we reached the end, call add_dnodeint_end to insert at the end */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Fill in the new node with the provided value and update the pointers */
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
