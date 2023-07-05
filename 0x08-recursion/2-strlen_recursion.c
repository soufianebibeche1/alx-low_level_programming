#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of a string
 *
 * Description : a function that returns the length of a string
 *
 * @s: The string to be cheked
 *
 * Return: an integers represent the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
