#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - encodes into 1337.
 *
 * Description: A function that encodes a string into 1337.
 *
 * @str: The string.
 *
 * Return: the new string encoded.
 */
char *leet(char *str)
{
	int i, j = 0;
	char sl[] = "aeotl";
	char ul[] = "AEOTL";
	char n[] = "43071";

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == sl[j] || str[i] == ul[j])
			{
				str[i] = n[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
