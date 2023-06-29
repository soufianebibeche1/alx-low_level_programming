#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string..
 *
 * Description: A function that capitalizes all words of a string..
 *
 * @str: The string.
 *
 * Return: the new string.
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = toupper(str[0]);
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
	}

	return (str);
}
