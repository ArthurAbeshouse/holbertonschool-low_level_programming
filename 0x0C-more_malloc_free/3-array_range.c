#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - makes memory for an array
 * @min: minimum number
 * @max: maximum number
 * Return: returns the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
