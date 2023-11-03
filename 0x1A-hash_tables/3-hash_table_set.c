#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hash table to add the key-value pair to
 * @key: The key to add (must not be an empty string)
 * @value: The value associated with the key (can be an empty string)
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Create a new node and allocate memory for key and value */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = (value == NULL) ? strdup("") : strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Insert the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
