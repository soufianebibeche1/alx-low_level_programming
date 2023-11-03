#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a given key
 * @ht: The hash table to search in
 * @key: The key to look up
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	/* Ensure that the calculated index is within the bounds of the hash table */
	if (index >= ht->size)
		return (NULL);

	/* Traverse the linked list at the calculated index to find the key */
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
