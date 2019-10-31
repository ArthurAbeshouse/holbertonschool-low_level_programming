#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to nodes
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
