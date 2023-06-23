#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Description: prints the numbers, from 0 to 9.
 *
 * Return: void.
 */
void print_numbers(void)
{
	int i=0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i+'0');
	}
	_putchar('\n');
}
