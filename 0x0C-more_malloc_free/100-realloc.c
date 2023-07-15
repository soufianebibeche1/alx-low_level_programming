#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * Description : reallocates a memory block using malloc and free
 *
 * @ptr: the pointer.
 * @old_size: the old size of the pointer.
 * @new_size: the new size of the pointer.
 *
 * Return: void a pointer to the new reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;
	unsigned char *src, *dest;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p != NULL)
	{
		src = (unsigned char *)ptr;
		dest = (unsigned char *)p;

		for (i = 0; i < old_size && i < new_size; i++)
		{
			dest[i] = src[i];
		}
		free(ptr);
	}

	return (p);
}
