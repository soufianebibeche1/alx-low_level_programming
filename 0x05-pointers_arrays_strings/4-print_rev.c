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
	int i, length;

	length = strlen(s);
	i = 0;

	for (i = length; i >= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	 _putchar('\n');
}
