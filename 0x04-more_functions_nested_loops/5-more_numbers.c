#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int j, k;

	j = 0;
	while (j < 10)
	{
		k = 0;
		while (k < 15)
		{
			if (k > 9)
				_putchar(k / 10 + '0');

			_putchar(k % 10 + '0');
			k++;
		}
		j++;
		_putchar('\n');
	}
}
