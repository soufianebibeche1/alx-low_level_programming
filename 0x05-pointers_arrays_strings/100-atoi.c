#include <stdio.h>
#include <string.h>
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
	int length = strlen(s);
	int sign = 1;
	long int result = 0;
	int i;

    for (i = 0; i < length; i++)
    {
        if (*(s + i) == ' ')
        {
            continue;
        }
        else if (*(s + i) == '-')
        {
            sign = -1;
        }
        else if (*(s + i) == '+')
        {
            continue;
        }
        else if (*(s + i) >= '0' && *(s + i) <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
    }

    return (result * sign);
}
