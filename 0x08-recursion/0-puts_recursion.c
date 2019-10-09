#include "holberton.h"
/**
 * _put_recursion - ecursion function to print string
 * @s: pointer of char type to input string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puthcar(*s);
	s++;
	_put_recursion(s);
}
