#include <stdio.h>

void printFibonacci(unsigned int n) {
    unsigned int count;
    unsigned int f1 = 1, f2 = 2, temp;

    printf("%u, %u", f1, f2);

    for (count = 3; count <= n; ++count) {
        temp = f1 + f2;
        printf(", %u", temp);

        f1 = f2;
        f2 = temp;
    }

    printf("\n");
}

int main(void) {
    printFibonacci(98);

    return 0;
}
