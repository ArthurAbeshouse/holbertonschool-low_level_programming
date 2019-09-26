#include "holberton.h"

/**
 * print_square - print hashes in pattern of size
 * @size: int type
 *Return: prints hashes in squares
 */
void print_square(int size)
{
	int a, b;

	a = 0;
	while (a <= size)
	{
		a++;
		b = 0;
		_putchar('\n');
		while (b <= size)
		{
			_putchar(35);
			b++;
		}
	}
}
