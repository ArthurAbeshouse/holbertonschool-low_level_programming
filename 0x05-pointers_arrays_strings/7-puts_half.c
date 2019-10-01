#include "holberton.h"

void puts_half(char *str)
{
	int leng, n;

	leng = n = 0;
	while (*(str + leng) != 0)
	{
		leng++;
	}
	if (leng % 2 == 0)
		leng /= 2;
	else
	{
		n = (leng - 1) / 2;
		leng -= n;
	}
	while (*(str + leng) != 0)
	{
		_putchar(*(str + leng));
		leng++;
	}
	_putchar('\n');
}
