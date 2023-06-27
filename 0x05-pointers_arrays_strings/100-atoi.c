#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * Description: A function that converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int sign = 1;
	int digit = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			digit = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}

		if (digit == 1)
		{
			break;
		}

		i++;
	}

	result = result * sign;
	return (result);
}
