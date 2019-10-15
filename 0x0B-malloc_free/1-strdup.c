#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to string array input
 * Return: Returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int len, j;
	char *dup;

	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dup = malloc(len * sizeof(char));
	if (dup == NULL)
		free(p);
		return (NULL);
	for (j = 0; j < len; j++)
		dup[j] = str[j];
	dup[j] = '\0';
	return (dup);
}
