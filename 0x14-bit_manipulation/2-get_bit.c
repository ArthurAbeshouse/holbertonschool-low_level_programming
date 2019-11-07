#include "holberton.h"
/**
 * get_bit - gets value of int at an index
 * @n: unsigned long int type
 * @index: unsigned int type
 * Return: returns converted number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask =  1;

	if (index > sizeof(n) * 8)
		return (-1);

	mask <<= index;

	if (mask & n)
		return (1);
	else
		return (0);
}
