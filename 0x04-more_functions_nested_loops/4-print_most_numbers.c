#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - that prints the numbers, from 0 to 9.
 *
 * Description: This function that prints the.
 *
 * numbers,from 0 to 9 Do not print 2 and 4
 *
 * Return: The multiplies two integers.
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
