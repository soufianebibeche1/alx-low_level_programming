#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcpy - prints n elements of an array
 *
 * Description : a function that copies the string pointed to by src
 *
 * @dest: the destination.
 *
 * @src: the source.
 *
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = strlen(src);
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';

	return (dest);
}
