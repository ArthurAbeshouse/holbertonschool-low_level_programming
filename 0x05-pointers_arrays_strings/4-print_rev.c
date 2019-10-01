#include "holberton.h"

/**
 * print_rev - change the values of ints
 * @s: char type
 * Description: takes a string and prints it to standard output
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	a--; // reads the output from the previous and prints it out
	while (s[a] != 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
