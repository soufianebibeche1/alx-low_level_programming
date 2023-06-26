#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * Description : a function that prints half
 *
 * of a string, followed by a new line
 *
 * @str: the the string to reverse.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, length, start;

	length = strlen(str);
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	for (i = start; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
