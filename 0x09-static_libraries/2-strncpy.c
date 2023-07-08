#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copy from a strings.
 *
 * Description: A function that function that concatenates two strings..
 *
 * @dest: The destination string.
 *
 * @src: The source string.
 *
 * @n: the end .
 *
 * Return: a pointer pointing to the concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
