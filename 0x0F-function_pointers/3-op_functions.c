#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Entry point
 *
 * @a: the first integers
 * @b: the second integers
 *
 * Description: function that sum two integers.
 *
 * Return: returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 *
 * @a: the first integers
 * @b: the second integers
 *
 * Description: a function returns the difference of a and b.
 *
 * Return: returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 *
 * @a: the first integers
 * @b: the second integers
 *
 * Description: a function returns the product of a and b.
 *
 * Return: returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 *
 * @a: the first integers
 * @b: the second integers
 *
 * Description: a function returns the result of the division of a by b.
 *
 * Return: returns the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point
 *
 * @a: the first integers
 * @b: the second integers
 *
 * Description: a function returns the remainder of the division of a by b.
 *
 * Return: returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
