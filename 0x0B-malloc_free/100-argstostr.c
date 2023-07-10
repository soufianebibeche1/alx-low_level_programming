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
	int i, pos = 0, Maxlen = 0;
	char *concated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		Maxlen = Maxlen + strlen(av[i]);
	}

	Maxlen = Maxlen + ac - 1;

	concated = malloc(sizeof(char) * (Maxlen + 1));

	if (concated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(concated + pos, av[i]);
		pos = pos + strlen(av[i]);

		if (i < ac - 1)
		{
			concated[pos] = '\n';
			pos++;
		}
	}

	concated[pos] = '\0';

	return (concated);

}
