#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 *
 * @h: input of head of linked list
 *
 * Return: count number of the nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *holder, *n_head, *n_h;
	size_t count = 0, c = 0, n = 0;

	if (h == NULL)
		return (0);
	n_head = *h;
	while (n_head)
	{
		++count;
		n_h = *h;
		n = 0;
		while (n < count)
		{
			if (n_h == n_head->next)
			{
				n_head->next = NULL;
				break;
			}
			else
			{
				n_h = n_h->next;
				++n;
			}
		}
		n_head = n_head->next;
	}
	while (*h != NULL)
	{
		holder = (*h)->next;
		free(*h);
		*h = holder;
		++c;
	}
	return (c);
}
