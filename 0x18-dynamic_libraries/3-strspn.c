#include <stdio.h>
#include "main.h"


/**
 * _strspn - length of a prefix substring .
 *
 * Description: a function that locates a character in a string.
 *
 * @s: the string to work on.
 * @accept: second string.
 *
 * Return: a pointer to dest.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found;
	int i;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
			return (len);

		len++;
		s++;
	}

	return (len);
}
