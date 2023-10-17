#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - compares two strings.
 *
 * Description: A function that compares two strings.
 *
 * @s1: The first string.
 *
 * @s2: The seconds string.
 *
 * Return: difference between the 2 string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
