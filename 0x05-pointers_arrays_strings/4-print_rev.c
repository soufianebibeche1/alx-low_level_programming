#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * Description : a function that prints a string
 *
 * in reverse, followed by a new line.
 *
 * @s: the the string checked.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int length, i;

	length = strlen(s);

	for (i = 0; i < length; i++)
	{
		_putchar(*(s + length - i - 1));
	}

	_putchar('\n');
}
