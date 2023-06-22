#include <stdio.h>

void print_fibonacci_sequence(int n) {
    int a = 1;
    int b = 2;
    int i;

    // Print the first two Fibonacci numbers
    printf("%d, %d, ", a, b);

    // Print the remaining Fibonacci numbers
    for (i = 3; i <= n; i++) {
        int next = a + b;

        printf("%d", next);

        if (i < n)
            printf(", ");

        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    print_fibonacci_sequence(98);

    return 0;
}
