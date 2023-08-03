#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number you want to convert into binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit, p = 0;
	unsigned long int bitrep;

	for (bit = 63; bit >= 0; bit--)
	{
		bitrep = n >> bit;

		if (bitrep & 1)
		{
			_putchar('1');
			p++;
		}
		else if (p)
		{
			_putchar('0');
		}
	}
	if (!p)
	{
		_putchar('0');
	}

}
