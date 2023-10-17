#include <stdio.h>
#include "main.h"


/**
 * _strpbrk - searches a string.
 *
 * Description: a function that searches a string for any of a set of bytes.
 *
 * @s: the string to work on.
 * @accept: second string.
 *
 * Return: a pointer to dest.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
