#include "hash_tables.h"

/**
 * key_index - Calculate the index of a key in a hash table array
 * @key: The key (a string) for which to calculate the index
 * @size: The size of the hash table array
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Calculate index by taking the mod of the hash value with the array size */
	return (hash_value % size);
}
