#include "holberton.h"
/**
 * print_binary - converts a decimal number to binary
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n>>1);

	if (n & 1)
		_putchar('1');

	else
		_putchar('0');
}
