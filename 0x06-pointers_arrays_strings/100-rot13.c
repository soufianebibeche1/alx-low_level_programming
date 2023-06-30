#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * rot13 - encodes into 1337.
 *
 * Description: A function that encodes a string into rot13.
 *
 * @str: The string.
 *
 * Return: the new string
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (*(str + i) != '\0')
	{
		for (j = 0; j < (int)strlen(alphabet); j++)
		{
			if (*(str + i) == alphabet[j])
			{
				*(str + i) = rot13[j];
				break;
			}
		}
	i++;
	}

	return (str);
}
