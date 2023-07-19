#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * @array: the array
 * @size: the size is the size of the array
 * @action: is a pointer to the function you need to use.
 *
 * Description: function that executes a function
 * given as a parameter on each element of an array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
