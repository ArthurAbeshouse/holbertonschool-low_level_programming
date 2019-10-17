#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: number of bytes from string 2 to include
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s1[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	new_string = malloc((len1 + (n + 1)) * sizeof(char));

	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		new_string[i] = s2[j];
		i++;
	}

	new_string[i] = '\0';
	return (new_string);
}
