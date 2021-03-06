#include "lists.h"
/**
 * listint_len - returns the number of elements in a list
 * @h: listint_t type
 *
 * Return: number of nodes in list h
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
