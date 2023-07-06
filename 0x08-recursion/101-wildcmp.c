#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wildcmp - compares two strings.
 *
 * Description : a function that compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0.
 *
 * @s1: the first string.
 * @s2: the seconds string.
 *
 * Return: returns 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0' || *(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else if (wildcmp(s1, s2 + 1))
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1 + 1, s2));
		}
	}
	else if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else
	{
		return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
	}
}
