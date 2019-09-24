#include <stdio.h>
/**
 * print_to_98 - check for numbers less than 98
 * @n: int type
 * Return: return all values including 98
 */
void print_to_98(int n)
{
	int m;

	for (m = n; m <= 98; m++)
	{
		if (m != 98)
		{
			printf("%d, ", m);
		}
		else
		{
			printf("%d\n", m);
		}

	}
	for (m = n; m >= 98; m--)
	{
		if (m != 98)
		{
			printf("%d, ", m);
		}
		else
		{
			printf("%d\n", m);
		}
	}
}
