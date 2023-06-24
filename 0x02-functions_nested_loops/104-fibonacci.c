#include <stdio.h>

void print_fibonacci(int n);

int main(void) {
    print_fibonacci(98);
    return 0;
}

void print_fibonacci(int n) {
    int current = 1, next = 2, temp;
    int count;

    printf("%d, %d", current, next);

    for (count = 3; count <= n; ++count) {
        temp = current + next;
        printf(", %d", temp);
        current = next;
        next = temp;
    }

    printf("\n");
}
