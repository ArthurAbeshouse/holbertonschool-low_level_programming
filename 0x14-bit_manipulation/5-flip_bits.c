#include "holberton.h"
/**
 * flip_bits - flips the bits
 * @n: unsigned long int type
 * @m: unsigned long int type
 * Return: compare and return the flipped numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask = 0;
	unsigned long int i;

	i = n ^ m;
	while (i > 0)
	{
		if (i & 1)
			mask++;

		i = i >> 1;
	}
	return (mask);
}
