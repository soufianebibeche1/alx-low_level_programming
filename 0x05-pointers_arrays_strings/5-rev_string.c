#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * Description : a function that reverses a string
 *
 * @s: the the string to reverse.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, length;
	char temp;

	length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
