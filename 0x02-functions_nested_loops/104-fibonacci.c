#include <stdio.h>

unsigned long fibonacci(unsigned int n);

int main(void)
{
    unsigned int num_terms, i;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%u", &num_terms);

    printf("Fibonacci sequence:\n");
    for (i = 0; i < num_terms; i++)
    {
        printf("%lu ", fibonacci(i));
    }

    return 0;
}

unsigned long fibonacci(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        unsigned long a = 0, b = 1, c;
        unsigned int i;

        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
}
