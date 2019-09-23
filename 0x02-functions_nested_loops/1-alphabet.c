#include "holberton.h"
/**
 * main - uses only user defined variables to create output
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
