#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the node
 * Return: returns the amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
