#include <stdio.h>

int main(void) {
    unsigned int count;
    unsigned long f1 = 1, f2 = 2, temp;

    printf("%lu, %lu", f1, f2);

    for (count = 3; count <= 98; ++count) {
        temp = f1 + f2;
        printf(", %lu", temp);

        f1 = f2;
        f2 = temp;
    }

    printf("\n");

    return 0;
}
