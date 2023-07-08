#include <stdio.h>
#include "main.h"

/**
 * _abs - checks for number's absolute value.
 *
 * Description: This function checks for number's absolute value.
 *
 * @n: The number to be checked.
 *
 * Return: the absolute value of a number.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
