#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -  creates an array of integers.
 * @min: the start of the array .
 * @max: the end of arra.
 *
 * Return: void
 */
int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	t = malloc((max - min + 1) * sizeof(int));
	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		t[i] = min + i;
	}

	return (t);
}
