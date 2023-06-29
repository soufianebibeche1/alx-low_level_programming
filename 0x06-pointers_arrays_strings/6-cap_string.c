#include <stdio.h>
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
	int i, temp;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
