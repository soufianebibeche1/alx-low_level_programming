#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 *
 *Description : a function Prints a string followed by a new line (recursive)
 *
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
