#include <stdio.h>

void print_fibonacci(int count)
{
    int current = 1;
    int previous = 2;

    // Print the first two Fibonacci numbers
    printf("1, 2, ");

    for (int i = 3; i <= count; i++)
    {
        int next = current + previous;
        printf("%d", next);

        if (i < count)
        {
            printf(", ");
        }

        previous = current;
        current = next;
    }

    printf("\n");
}

int main(void)
{
    int count = 98;
    print_fibonacci(count);

    return 0;
}

