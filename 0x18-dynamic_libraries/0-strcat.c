#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * Description: A function that function that concatenates two strings..
 *
 * @dest: The first convert.
 *
 * @src: The second string.
 *
 * Return: a pointer pointing to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int srclength, destlength, maxlength, i;

	srclength = strlen(src);
	destlength = strlen(dest);
	maxlength = srclength + destlength;
	for (i = 0; i < maxlength; i++)
	{
		if (i < destlength)
		{
			dest[i] = dest[i];
		}
		else if (i >= destlength && i < maxlength)
		{
			dest[i] = src[i - destlength];
		}
	}

	dest[maxlength] = '\0';
	return (dest);
}
