#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Creates a new HashTable. */
	hash_table_t *new_table = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_node_t pointers */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	/* Initialize all elements of the array to NULL */
	for (i = 0; i < (unsigned long int) size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
