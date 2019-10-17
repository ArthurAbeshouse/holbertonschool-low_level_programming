#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: return pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
