#include <stdio.h>
#include "main.h"


/**
 * _memcpy - copies memory area.
 *
 * Description: a function that copies memory area.
 *
 * @n: the first n bytes of the memory.
 * @src: the memory source to copy from.
 * @dest: the memory source to copy to.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
