#include "search_algos.h"

/**
 * binary_search - searches for an array using the binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index id successful, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int right = size - 1;
	int left = 0;
	size_t half;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = 0; i < size; i++)
			printf("%s%d", (i == 0) ? " " : ", ", array[i]);

		printf("\n");

		half = (left + right) / 2;
		if (array[half] == value)
			return (half);
		else if (array[half] > value)
			right = half - 1;
		else
			left = half + 1;
	}
	return (-1);
}
