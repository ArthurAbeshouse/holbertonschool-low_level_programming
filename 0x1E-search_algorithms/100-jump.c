#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of ints using jump search
 * algorithm.
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index id successful, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step = sqrt(size);

	if (array == NULL)
		return (-1);

	for (i = 0; i < size && array[i] < value; i += step)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	i -= step;
	printf("Value found between indexes [%lu] and [%lu]\n", i, i + step);
	for (; i <= (i + step) && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
