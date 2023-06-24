#include <stdio.h>

int main(void) {
    int count;
    unsigned int fib1 = 1, fib2 = 2, fibn;
    
    printf("%d, %d", fib1, fib2);  // Print the first two Fibonacci numbers
    
    for (count = 3; count <= 98; count++) {
        fibn = fib1 + fib2;
        printf(", %u", fibn);
        
        fib1 = fib2;
        fib2 = fibn;
    }
    
    printf("\n");
    
    return 0;
}
