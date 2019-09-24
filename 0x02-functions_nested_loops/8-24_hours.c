#include "holberton.h"

/**
 * jack_bauer - print every minutes of the day
 *
 * Return: all the minutes
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 59; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
