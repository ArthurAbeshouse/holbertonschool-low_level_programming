#include "holberton.h"
/**
 * puts2 - print onnly the first of two characters
 * @str: the input to print form
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (*(str + a) != 0)
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
