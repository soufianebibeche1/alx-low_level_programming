#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse;
 *
 *Description : a function that prints a string in reverse
 *
 * @s: The string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
