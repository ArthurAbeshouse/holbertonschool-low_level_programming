#include <stdio.h>

/**
 * main - prints the first 98 numbers
 *
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
	long fib1, fib1a, fib1b, fib2, fib2a, fib2b, fib3, fib3a, fib3b;
	long n = 10000000000;

	fib1 = 0;
	fib2 = 1;
	int counter = 1;

	for (counter = 0; counter < 91; counter++)
	{
		fib3 = fib2 + fib1;
		fib1 = fib2;
		fib2 = fib3;
		printf("%ld, ", fib3);
	}
	fib1a = fib1 / n;
	fib1b = fib1 % n;
	fib2a = fib2 / n;
	fib2b = fib2 % n;
	for (; counter < 98; counter++)
	{
		fib3a = fib1a + fib2a;
		fib3b = fib1b + fib2b;
		if (fib3b > n)
		{
			fib3b = fib3b % n;
			fib3a++;
		}
		if (counter != 97)
		{
			printf("%ld%ld, ", fib3a, fib3b);
			fib1a = fib2a;
			fib1b = fib2b;
			fib2a = fib3a;
			fib2b = fib3b;
		}
		else
			printf("%ld%ld\n", fib3a, fib3b);
	}
	return (0);
}
