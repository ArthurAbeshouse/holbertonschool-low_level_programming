#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: string to look through
 * @needle: substring to find
 * Return: pointer to location of string
 */

char *_strstr(char *haystack, char *needle)
{
	const char *str, *str2;

	if (!haystack || !needle)
		return (0);

	if (!*needle)
		return ((char *)haystack);
	for (; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			str2 = haystack;
			str = needle;
			for (; *str2; str++, str2++)
			{
				if (*str2 != *str)
					break;
			}
			if (!*str)
				return ((char *)haystack);
		}
	}
	return (0);
}
