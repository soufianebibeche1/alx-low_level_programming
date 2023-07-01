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
	unsigned int numb = n, x, count = 1;

	if (n < 0)
	{
		_putchar('-');
		numb = -n;
	}
	x = numb;
	while (x > 9)
	{
		x /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		_putchar(((numb / count) % 10) + '0');
		count /= 10;
	}
}
