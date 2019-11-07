#include "holberton.h"
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: input binary number in strings
 * Return: unsigned decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, check = 1;
	int index;

	/* if b is NULL, then return 0 */
	if (b == NULL)
		return (0);

	index = 0;

	/* while b[index] isn't '\0' */
	while (b[index])
	{
		/* If one or more chars in the */
		/* string b is not 0 or 1, then return 0 */
		if (b[index] != '0' && b[index] != '1')
			return (0);

		/* count = count << 1: shifted left by 1 bit */
		count <<= 1;
		if (b[index] == '1')
			/* count = count^check: copies the bit if it's */
			/* set in one operand but not both */
			count ^= check;
		index++;
	}
	return (count);
}
