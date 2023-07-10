#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: first argument.
 * @av: seconds argument
 *
 * Return: a pointer to a string contain concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
	int i, j, pos, len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		str[pos] = '\n';
		pos++;
	}
	str[pos] = '\0';

	return (str);
}
