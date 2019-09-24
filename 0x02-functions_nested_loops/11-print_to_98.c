#include <stdio.h>
/**
 * print_to_98 - check for numbers less than 99
 * @n: int type
 * Return: return all values including 98
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		if (n != 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d\n", n);
			n++;
		}

	}
	while (n > 99)
	{
		if (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d\n", n);
			n--;
		}
	}
}
