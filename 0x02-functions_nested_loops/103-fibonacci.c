#include "stdio.h"

/**
 * main - sum all even numbers under
 * 4000000 into a fibobnachi sequence
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
	long int fib1 = 0;
	long int fib2 = 0;
	long int fib3 = 1;
	long int sum = 0;

	while (fib2 < 4000000)
	{
		fib2 = fib1 + fib3;
		fib1 = fib3;
		fib3 = fib2;
		if (fib2 % 2 == 0)
		{
			sum = sum + fib2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
