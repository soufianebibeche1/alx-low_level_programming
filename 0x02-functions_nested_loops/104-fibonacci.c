#include <stdio.h>

#define MAX 100

long long fib_cache[MAX];

long long fibonacci_memoization(int n) {
    if (n <= 1)
        return n;

    if (fib_cache[n] != -1)
        return fib_cache[n];

    fib_cache[n] = fibonacci_memoization(n - 1) + fibonacci_memoization(n - 2);
    return fib_cache[n];
}

int main() {
    int i;

    // Initialize cache with -1
    for (i = 0; i < MAX; i++)
        fib_cache[i] = -1;

    // Print the first 98 Fibonacci numbers
    for (i = 1; i <= 98; i++)
        printf("%lld\n", fibonacci_memoization(i));

    return 0;
}
