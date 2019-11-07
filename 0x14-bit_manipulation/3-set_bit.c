#include "holberton.h"
/**
 * set_bit - sets bit at index to 1
 * @n: binary number given
 * @index: index  given
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n |= *n | (1 << index);
		return (1);
	}
	return (-1);
}
