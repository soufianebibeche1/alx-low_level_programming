#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of the even-valued terms
 *              in the Fibonacci sequence, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count;
    long fib1 = 1, fib2 = 2, fibn = 0;
    long sum = 2; // Start with the sum as 2 (for the second Fibonacci number)

    printf("%ld, %ld", fib1, fib2); // Print the first two Fibonacci numbers

    while (count <= 96) // Loop until the 96th Fibonacci number
    {
        fibn = fib2 + fib1;

        if (fibn % 2 == 0) // Check if the Fibonacci number is even
        {
            sum += fibn; // Add the even Fibonacci number to the sum
        }

        printf(", %ld", fibn);

        fib1 = fib2;
        fib2 = fibn;

        count++;
    }
    return 0;
}

