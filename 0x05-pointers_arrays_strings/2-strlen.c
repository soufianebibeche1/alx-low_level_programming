#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - the length of a string.
 *
 * Description : function that returns the length of a string.
 *
 * @s: the the string checked.
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
