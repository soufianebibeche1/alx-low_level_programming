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
	int n1_length = 0, n2_length = 0, sum, lg_length, digit1, digit2, add = 0;

	/* Calculate the length of n1 and n2 */
	while (*(n1 + n1_length) != '\0')
		n1_length++;
	while (*(n2 + n2_length) != '\0')
		n2_length++;

	/* Determine the length of the larger number */
	if (n1_length >= n2_length)
		lg_length = n1_length;
	else
		lg_length = n2_length;

	/* Check if the buffer size is sufficient */
	if (size_r <= lg_length + 1)
		return (0);

	/* Initialize the result buffer */
	r[lg_length + 1] = '\0';

	/* Initialize variables for digit retrieval */
	n1_length--, n2_length--, size_r--;

	digit1 = *(n1 + n1_length) - '0';
	digit2 = *(n2 + n2_length) - '0';

	/* Perform addition digit by digit */
	while (lg_length >= 0)
	{
		sum = digit1 + digit2 + add;
		if (sum >= 10)
			add = sum / 10;
		else
			add = 0;
		/* Store the result digit in the buffer */
		*(r + lg_length) = (sum % 10) + '0';

		/* Retrieve next digits */
		if (n1_length > 0)
			n1_length--, digit1 = *(n1 + n1_length) - '0';
		else
			digit1 = 0;

		if (n2_length > 0)
			n2_length--, digit2 = *(n2 + n2_length) - '0';
		else
			digit2 = 0;

		lg_length--, size_r--;
	}

	/* Remove leading zeros if present */
	if (*r == '0')
		return (r + 1);
	else
		return (r);
}
