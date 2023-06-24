#include <stdio.h>

void generateFibonacciSequence(unsigned long long int n) {
    unsigned long long int a = 1, b = 2;
    unsigned long long int sum;
    printf("%llu, %llu, ", a, b);
    while (1) {
        sum = a + b;
        if (sum > n)
            break;
        printf("%llu, ", sum);
        a = b;
        b = sum;
    }
}

int main() {
    unsigned long long int targetNumber = 218922995834555169026ULL;
    generateFibonacciSequence(targetNumber);

    return 0;
}
