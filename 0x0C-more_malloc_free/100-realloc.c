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
	char *p, *tmp_p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}

	tmp_p = ptr;

	for (i = 0; i < old_size; i++)
	{
		p[i] = tmp_p[i];
	}

	free(ptr);
	return (p);
}
