#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rot13 - encodes into 1337.
 *
 * Description: A function that encodes a string into rot13.
 *
 * @str: The string.
 *
 * Return: the new string encoded.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; strlen(alphabet); j++)
		{
			if (alphabet[j] == str[i])
			{
				str[i] = rot13_alphabet[j];
				break;
			}
		}
	}

	return (str);
}
