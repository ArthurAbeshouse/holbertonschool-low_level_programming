#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
        dlistint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = holder;
	}
}
