#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * @array: the array
 * @size: the number of elements inside array.
 * @cmp: is a pointer to the function you need to use.
 *
 * Description: function that searches for an integer.
 *
 * Return: int index for the first element match otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
