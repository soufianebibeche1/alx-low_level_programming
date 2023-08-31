#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - the value of a bit at a given index.
 *
 * @n: the number you want.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at
 * index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index > 63)
		return (-1);

	res = (n >> index) & 1;

	return (res);
}
