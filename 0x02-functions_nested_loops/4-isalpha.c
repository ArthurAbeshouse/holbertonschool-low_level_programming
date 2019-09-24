#include "holberton.h"
/**
 * _isalpha - checks if character is an uppercase or lowercase letter
 * @c: arg to be checked
 * Return: 1 for alpha, 0 for non-alpha
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
