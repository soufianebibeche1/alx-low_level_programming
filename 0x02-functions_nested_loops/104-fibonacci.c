#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *              starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long fib1 = 1, fib2 = 2, fibn;

    printf("%ld, %ld", fib1, fib2);

    for (int i = 3; i <= 98; i++)
    {
        fibn = fib1 + fib2;
        printf(", %ld", fibn);

        fib1 = fib2;
        fib2 = fibn;
    }

    printf("\n");

    return 0;
}
