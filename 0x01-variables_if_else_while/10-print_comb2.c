#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');

		if (n != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
