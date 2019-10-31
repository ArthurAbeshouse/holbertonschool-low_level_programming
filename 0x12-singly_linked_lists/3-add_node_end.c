#include "lists.h"
/**
 * *add_node_end - adds a new element at the end of a list
 * @head: beginning of list
 * @str: new node to add
 * Return: address of new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *first;
	unsigned int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}

	first = malloc(sizeof(list_t));
	if (first ==  NULL)
		return (NULL);
	first->str  = strdup(str);
	first->len  = counter;

	if (*head == NULL)
	{
		*head = first;
		first->next = NULL;
		return (*head);
	}
	temp =  *head;

	/* adds a new node at the end of a list*/
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = first;
	first->next = NULL;

	return (*head);
}
