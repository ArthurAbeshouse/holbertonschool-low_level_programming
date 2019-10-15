#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns s1 and s2 on success, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1count, s2count, size, i;

	s1count = s2count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1count] != '\0')
		s1count++;
	while (s2[s2count] != '\0')
		s2count++;

	str = malloc((s1count + s2count) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (size = 0; size < s1count; size++)
		str[size] = s1[size];
	for (i = 0; i < s2count; i++)
		str[size + i] = s2[i];
	str[size + i] = '\0';
	return (str);
}
