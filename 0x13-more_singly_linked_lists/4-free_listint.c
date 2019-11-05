#include "lists.h"
/**
 * free_list - frees a listint_t list
 * @head: list to free
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		head = head->next;
		free(head);
	}
}
