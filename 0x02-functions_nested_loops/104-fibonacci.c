#include <stdio.h>

void calculateFibonacci(int n);

int main(void) {
    int n = 98;
    calculateFibonacci(n);

    return 0;
}

void calculateFibonacci(int n) {
    int fib0 = 0, fib1 = 1, fibn, i;
    char arr[200]; // Increased the size to accommodate the long string

    sprintf(arr, "%d, %d", fib0, fib1); // Store the first two Fibonacci numbers in the array
    printf("%s", arr); // Print the array

    for (i = 2; i < n; i++) {
        fibn = fib0 + fib1;
        printf(", %d", fibn);
        sprintf(arr, "%s, %d", arr, fibn);
        fib0 = fib1;
        fib1 = fibn;
    }

    printf("\n");
}
