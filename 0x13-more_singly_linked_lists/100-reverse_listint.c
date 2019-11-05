#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head
 *
 * Return: always successful
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward;
	listint_t *back = NULL;

	/* Check if head is null */
	if (head  == NULL)
		return (NULL);
	forward = *head;

	/* Reverse list*/
	while (forward != NULL)
	{
		forward = forward->next;
		forward = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forward;
	}
	*head = back;
	return (*head);
}
