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
	void *src;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}

	src = ptr;

	for (i = 0; i < old_size; i++)
	{
		((unsigned char *)p)[i] = ((unsigned char *)src)[i];
	}

	free(ptr);
	return (p);
}
