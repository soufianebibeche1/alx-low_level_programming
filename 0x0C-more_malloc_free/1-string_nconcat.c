#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: the first string.
 * @s2: the second string.
 * @n: the first n bytes of s2
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	concatenated = malloc(len1 + n + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concatenated[len1 + j] = s2[j];
	}
	concatenated[len1 + n] = '\0';

	return (concatenated);
}
