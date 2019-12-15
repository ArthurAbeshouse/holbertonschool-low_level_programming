#include "lists.h"

/**
 * sum_dlistint - returns the sum of a doubly linked list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
