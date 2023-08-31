#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int test = n ^ m;
	unsigned int cpt = 0;

	while (test != 0)
	{
		cpt += test & 1;
		test >>= 1;
	}
	return (cpt);
}
