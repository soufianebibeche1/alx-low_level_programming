#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * Description: function that draws a straight line in the terminal.
 *
 * @n: The first integers.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
