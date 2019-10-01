#include "holberton.h"
/**
 * rev_string - Reverse the string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	char str[10000];
	int a, b;

	a = 0;
	while (*(s + a) != 0)
	{
		str[a] = *(s + a);
		a++;
	}
	b = a - 1;
	a = 0;
	while (b >= 0)
	{
		*(s + b) = str[a];
		b--;
		a++;
	}
}
