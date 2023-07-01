#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - adds two numbers.
 *
 * Description: A function that adds two numbers.
 *
 * @n1: The first number.
 *
 * @n2: The second number.
 *
 * @r: The buffer to store result.
 *
 * @size_r: is the buffer size.
 *
 * Return: the new string include the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum, maxLen, digit1, digit2, add = 0;

	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;
	if (len1 >= len2)
		maxLen = len1;
	else
		maxLen = len2;
	if (size_r <= maxLen + 1)
		return (0);
	r[maxLen + 1] = '\0';
	len1--, len2--, size_r--;
	digit1 = *(n1 + len1) - 48, digit2 = *(n2 + len2) - 48;
	while (maxLen >= 0)
	{
		sum = digit1 + digit2 + add;
		if (sum >= 10)
			add = sum / 10;
		else
			add = 0;
		if (sum > 0)
		*(r + maxLen) = (sum % 10) + 48;
		else
			*(r + maxLen) = '0';
		if (len1 > 0)
			len1--, digit1 = *(n1 + len1) - 48;
		else
			digit1 = 0;
		if (len2 > 0)
			len2--, digit2 = *(n2 + len2) - 48;
		else
			digit2 = 0;
		maxLen--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
