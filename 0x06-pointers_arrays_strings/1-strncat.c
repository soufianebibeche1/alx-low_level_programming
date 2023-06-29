#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * Description: A function that function that concatenates two strings..
 *
 * @dest: The first convert.
 *
 * @src: The second string.
 *
 * @n: the end .
 *
 * Return: a pointer pointing to the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlength, i;

	destlength = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlength + i] = src[i];
	}
	dest[destlength + i] = '\0';

	return (dest);
}
