#include <stdio.h>

void print_fibonacci(int count);

int main(void)
{
	print_fibonacci(98);
	return 0;
}

void print_fibonacci(int count)
{
	int i, fib1 = 1, fib2 = 2, fib_next;
  
	printf("%d, %d", fib1, fib2);
  
	for (i = 3; i <= count; ++i)
	{
		fib_next = fib1 + fib2;
		printf(", %d", fib_next);
        
		fib1 = fib2;
		fib2 = fib_next;
	}
  
	printf("\n");
}
