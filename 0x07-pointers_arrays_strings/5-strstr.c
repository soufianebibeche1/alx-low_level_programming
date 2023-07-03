#include <stdio.h>
#include "main.h"


/**
 * _strstr - ocates a substring.
 *
 * Description: a function that locates a substring.
 *
 * @haystack: string searching into.
 * @needle: string searching for .
 *
 * Return: a pointer to the beginning 
 * of the located substring, or NULL otherwise.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
