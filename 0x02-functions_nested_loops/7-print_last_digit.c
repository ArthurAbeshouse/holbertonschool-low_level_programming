#include "holberton.h"
/**
 * print_last_digit - selects the last digit of an integer
 * @n: int type
 * Return: the absolute value of the last digit
 */
int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;

	if (lastD < 0)
	{
		lastD = lastD * -1;
	}
	_putchar(lastD + '0');
	return (lastD);
}
