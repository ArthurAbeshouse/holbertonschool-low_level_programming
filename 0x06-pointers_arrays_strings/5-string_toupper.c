#include "holberton.h"
/**
 * string_toupper - converts all lowercase letters of a string to uppercas
 * @c: pointer to the string converter
 * Return: the converted string
 */
char *string_toupper(char *)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		i++;
	}
	return (s);
}
