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
	int carry = 0;
	int n1_length = strlen(n1);
	int n2_lenchar *infinite_add(char *n1, char *n2, char *r, int size_r)

	int carry = 0;
	int n1_length = strlen(n1);
	int n2_length = strlen(n2);
	int lg_length = (n1_length >= n2_length) ? n1_length : n2_length;

	if (size_r <= lg_length + 1)
		return (NULL);

	r[lg_length + 1] = '\0';

	while (n1_length || n2_length || carry)
	{
		int digit1 = (n1_length > 0) ? (n1[--n1_length] - '0') : 0;
		int digit2 = (n2_length > 0) ? (n2[--n2_length] - '0') : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[--size_r] = (sum % 10) + '0';
	}

	if (r[size_r] == '0')
		return (r + size_r + 1);
	else
		return (r + size_r);
		return (r + size_r + 1);
	else
		return (r + size_r);
}
