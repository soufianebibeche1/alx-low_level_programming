#include <stdio.h>
#include "main.h"


/**
 * _strchr - locates a character .
 *
 * Description: a function that locates a character in a string.
 *
 * @s: the string to search on.
 * @c: the character.
 *
 * Return: a pointer to dest.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
