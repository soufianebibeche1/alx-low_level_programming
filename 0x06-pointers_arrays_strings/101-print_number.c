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
	unsigned int x;
	int count = 1;
	int singledigit = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	x = n;
	while (n > 9)
	{
		n /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		singledigit = (x / count) % 10;
		_putchar(singledigit + '0');
		count /= 10;
	}
}
