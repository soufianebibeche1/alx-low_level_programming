#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number you want to change.
 * @index: the position of number to change.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);

	return (1);
}
