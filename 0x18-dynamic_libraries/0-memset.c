#include <stdio.h>
#include "main.h"


/**
 * _memset - fills memory with a constant
 *
 * Description: a function that fills memory with a constant byte.
 *
 * @n: the first n bytes of the memory.
 * @b: the constant byte.
 * @s: area pointed to.
 *
 * Return: a pointer s to the filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
