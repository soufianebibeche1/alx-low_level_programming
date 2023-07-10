#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - pointer to a newly allocated space in memory,
 * which contains a copy of the string
 * @str: the given string
 *
 * Return: pointer to array conatining copy of give string .
 */
char *_strdup(char *str)
{
	char *duplicated;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	duplicated = malloc(sizeof(char) * len + 1);
	for (i = 0; i < len; i++)
	{
		*(duplicated + i) = *(str + i);
	}

	return (duplicated);
}
