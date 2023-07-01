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
	int carry = 0, digit1, digit2, sum = 0;

	for (int count1 = 0; n1[count1] != '\0'; count1++);
	for (int count2 = 0; n2[count2] != '\0'; count2++);

	int bigger_size = (count1 >= count2) ? count1 : count2;
	
	if (size_r <= bigger_size + 1)
		return NULL;

	r[bigger_size + 1] = '\0';
	count1--, count2--, size_r--;

	while (bigger_size >= 0)
	{
		digit1 = (count1 >= 0) ? n1[count1--] - '0' : 0;
		digit2 = (count2 >= 0) ? n2[count2--] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		*(r + bigger_size--) = (sum % 10) + '0';
	}

	if (*r == '0')
		return (r + 1);
	else
		return r;
}
