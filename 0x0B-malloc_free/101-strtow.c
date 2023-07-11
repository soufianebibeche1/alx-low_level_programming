#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words
 *
 * Description: splits a string into words
 *
 * @str: the string to split
 *
 * Return: pointer to each word inside the string
 */
char **strtow(char *str)
{
	int i, wordCount = 0;
	char **words = NULL;
	char *wordStart = str;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i - 1] != ' ')
			{
				str[i] = '\0';
				words = realloc(words, (wordCount + 1) * sizeof(char *));
				words[wordCount++] = wordStart;
				wordStart = &str[i + 1];
			}
		}
		else if (i == 0)
		{
			words = malloc(sizeof(char *));
			words[wordCount++] = wordStart;
		}
	}

	words = realloc(words, (wordCount + 1) * sizeof(char *));
	words[wordCount] = NULL;

	return (words);
}
