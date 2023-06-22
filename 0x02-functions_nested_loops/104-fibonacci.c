#include <stdio.h>

void print_fibonacci(int n) {
    int i, num1 = 1, num2 = 2, nextNum;

    printf("%d, %d, ", num1, num2); // Print the first two Fibonacci numbers

    for (i = 3; i <= n; i++) {
        nextNum = num1 + num2;
        printf("%d", nextNum);

        if (i != n) {
            printf(", "); // Print comma and space if it's not the last number
        }

        num1 = num2;
        num2 = nextNum;
    }

    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}
