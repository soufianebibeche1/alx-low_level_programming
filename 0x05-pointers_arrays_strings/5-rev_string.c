#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * Description : a function that reverses a string
 *
 * @s: the the string to reverse.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, length;
	char *sr;

	sr = s;
	length = strlen(s);
	i = 0;

	for (i = 0; i < length ; i++)
	{
		*(sr + i) = *(s + length - i - 1);
	}

	s = sr;
}
