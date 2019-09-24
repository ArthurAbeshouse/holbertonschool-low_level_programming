#include <stdio.h>
/**
 * print_to_98 - check for numbers above and below 98
 * @n: int type
 * Return: return all values including 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	else
		printf("98\n");
}
