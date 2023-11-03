#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			/* Initialize node with the first node in the list */
			node = ht->array[i];
			while (node != NULL)
			{
				/* Store the next node in the list */
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);

				/* Move to the next node */
				node = temp;
			}
		}
	}

	/* Free the array of pointers */
	free(head->array);

	/* Free the hash table structure */
	free(head);
}
