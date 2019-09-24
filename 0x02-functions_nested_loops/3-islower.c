#include "holberton.h"
/**
 * _islower - checks if character is lowercase, return 1 is yes and 0 if not.
 *
 * Return: 1 if C is lowercase and 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
