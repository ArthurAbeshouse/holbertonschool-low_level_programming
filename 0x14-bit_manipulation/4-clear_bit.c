#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index to clear
 * Return: 1 if successful or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (*n == '\0')
		return (-1);

	if (index > sizeof(n) * 8)
		return (-1);

	mask <<= index;
	*n &= ~check;
	return (1);
}
