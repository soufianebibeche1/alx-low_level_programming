#include "main.h"

/**
 * print_last_digit - prints the#include "main.h"
 * print_last_digit - prints the last digit of a number.
 *
 * Description: This function prints the last digit of a number.
 *
 * @n: The number to be checked.
 *
 * Return: prints the last digit of a number.
 */
int print_last_digit(int n)
{
	int _lastdegits;

	if (n < 0)
		n = -n;
	_lastdegits = n % 10;
	_putchar(_lastdegits + '0');

	return (_lastdegits);
}
