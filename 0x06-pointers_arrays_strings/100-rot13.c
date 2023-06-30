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
	char alpht[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alph[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; strlen(alph); j++)
		{
			if (alph[j] == str[i])
			{
				str[i] = rot13_alph[j];
				break;
			}
		}
	}

	return (str);
}
