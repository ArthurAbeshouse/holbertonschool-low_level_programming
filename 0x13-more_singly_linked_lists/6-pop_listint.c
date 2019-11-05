#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns its contents
 *
 * @head: head of the list
 *
 * Return: contents of head
 */

int pop_listint(listint_t **head)
{
	listint_t *top = NULL;
	int value = 0;

	if (*head == NULL)
	{
		return (0);
	}
	top = *head;
	value = top->n;
	*head = top->next;
	free(top);
	return (value);
}
