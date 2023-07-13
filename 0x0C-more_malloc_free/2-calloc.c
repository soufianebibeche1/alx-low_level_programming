#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc -  allocates memory for an array, using malloc
 * @nmemb: number of elemeent in the array .
 * @size: the size of each element.
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	memset(p, 0, nmemb * size);

	return (p);
}
