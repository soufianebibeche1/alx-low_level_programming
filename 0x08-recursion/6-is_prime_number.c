#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - calculate square
 *
 * Description : a function that returns 1 if
 * the input integer is a prime number, otherwise return 0.
 *
 * @n: the number to check.
 *
 * Return: an integers represent prime number or 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_divisibility(n, 2));
}

/**
 * check_divisibility - check divisble
 *
 * Description : a function that check if a numbre is divisible.
 *
 * @n: the number to check.
 * @diviseur: the divisor.
 *
 * Return: 1 if divisible or 0 otherwise.
 */
int check_divisibility(int n, int diviseur)
{
	if (diviseur >= n / 2)
		return (1);

	if (n % diviseur == 0)
		return (0);

	return (check_divisibility(n, diviseur + 1));
}
