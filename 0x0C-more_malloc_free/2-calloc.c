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
	void *p;
	char *str_p;
	unsigned int xsize, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	str_p = p;
	xsize = nmemb * size;
	for (i = 0; i < xsize; i++)
	{
		str_p[i] = 0;
	}

	return (p);
}
