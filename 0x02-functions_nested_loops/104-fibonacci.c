#include <stdio.h>

/**
 * main - prints the first 98 numbers
 *
 * Description: fibobnachi numbers starting from one
 * Return: 0
 */

int main(void)
{
	long int a, b, c, d;
	long int split_a1, split_a2;
	long int split_b1, split_b2;
	long int mix, tens, ones;

	a = 0;
	b = 1;
	for (d = 0; d <= 98; d++)
	{
		if (d < 91)
		{
			c = a + b;
			a = b;
			b = c;
			printf("%ld", c);
			printf(", ");
		}
		else if (d == 91)
		{
			split_a2 = a % 1000000000;
			split_a1 = a / 1000000000;
			split_b2 = b % 1000000000;
			split_b1 = b / 1000000000;
		}
		else
		{
			mix = (split_a2 + split_b2) / 1000000000;
			ones = (split_a2 + split_b2) - mix * 1000000000;
			tens = (split_a1 + split_b1) + mix;
			split_a2 = split_b2;
			split_b2 = ones;
			split_a1 = split_b1;
			split_b1 = tens;
			printf("%ld%ld", tens, ones);
			if (d != 98)
				printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
