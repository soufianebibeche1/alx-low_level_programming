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
		x = -n;
		n = -n;
	}
	else
	{
		x = n;
	}
	while (x > 9)
	{
		x /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		singledigit = (n / count) % 10;
		_putchar(singledigit + '0');
		count /= 10;
	}
}
