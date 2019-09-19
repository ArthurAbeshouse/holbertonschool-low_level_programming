#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = 0;

	for (x = 0; x <= 99; x++)
	{
		y = x % 10;
		z = x / 10;

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
