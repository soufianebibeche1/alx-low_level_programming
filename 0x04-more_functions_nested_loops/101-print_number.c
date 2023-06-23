#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer.
 *
 * Description: This function prints an integer character by character.
 *
 * @n: The number to be printed.
 *
 * Return: void
 */
void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}
