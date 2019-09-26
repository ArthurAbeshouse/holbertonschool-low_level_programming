#include "holberton.h"

/**
 * print_most_numbers - Print numbers 0 to 9, except 2 and 4
 * Description: use only _putchar
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (a != 2 && a != 4)
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
