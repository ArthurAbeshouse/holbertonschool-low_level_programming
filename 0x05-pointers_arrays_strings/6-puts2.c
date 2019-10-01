#include "holberton.h"
/**
 * puts2 - print onnly the first of two characters
 * @str: the input to print form
 */

void puts2(char *str);
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
