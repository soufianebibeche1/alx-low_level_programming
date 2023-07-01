#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_number - prints an integer.
 *
 * Description: A function that prints an integer.
 *
 * @n: The number.
 *
 * Return: void.
 */
void print_number(int n)
{

	int count = 1;
	int i, nbdigits = 0;
	int singledigit = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while ((n / count) >= 10)
	{
		count *= 10;
		nbdigits++;
	}

	for (i = 0; i <= nbdigits; i++)
	{
		singledigit = (n / count) % 10;
		_putchar(singledigit + '0');
		count /= 10;
	}
}
