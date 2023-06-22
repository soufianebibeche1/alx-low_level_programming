#include <iostream>

int main() {
    unsigned long first = 0;
    unsigned long second = 1;
    unsigned long next;

    std::cout << "Fibonacci Sequence up to the 98th number:\n";
    std::cout << first << ", " << second;

    for (int i = 2; i < 98; i++) {
        next = first + second;
        std::cout << ", " << next;
        first = second;
        second = next;
    }

    std::cout << std::endl;

    return 0;
}
