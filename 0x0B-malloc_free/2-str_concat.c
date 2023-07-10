#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to array the conatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i = 0, j, k, lenS1, lenS2, lenMax;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenS1 = strlen(s1);
	lenS2 = strlen(s2);
	lenMax = lenS1 + lenS2;

	concatenated = malloc(sizeof(char) * lenMax + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}

	while (i < lenMax)
	{
		for (j = 0; j < lenS1; j++)
		{
			*(concatenated + i) = *(s1 + j);
			i++;
		}
		for (k = 0; k < lenS2; k++)
		{
			*(concatenated + i) = *(s2 + k);
			i++;
		}
	}

	*(concatenated + lenMax) = '\0';

	return (concatenated);
}
