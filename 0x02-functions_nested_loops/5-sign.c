#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for number sign.
 *
 * Description: This function checks for number sign.
 *
 * @n: The number to be checked.
 *
 * Return: 1 if n is > 0, -1 if n is < 0 otherwise 0.
 */
int print_sign(int n)
{
if (n > 0)
{
	putchar('+');
	return (1);
}
else if (n < 0)
{
	putchar('-');
	return (-1);
}
else
{
	putchar('0');
	return (0);
}
}
