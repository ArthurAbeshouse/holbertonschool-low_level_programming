#include "holberton.h"
/**
 * _put_recursion - ecursion function to print string
 * @s: pointer of char type to input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
