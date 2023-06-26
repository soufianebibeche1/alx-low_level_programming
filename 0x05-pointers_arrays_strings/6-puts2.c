#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every character
 *
 * Description : a function that prints every other
 *
 * character of a string, starting with the first character
 *
 * @str: the the string to reverse.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);

	for (i = 0; i < length ; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
