#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
