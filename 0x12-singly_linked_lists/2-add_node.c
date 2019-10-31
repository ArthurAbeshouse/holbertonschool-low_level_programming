#include "lists.h"
/**
 * *add_node - function to add node to start
 * @head: beginning of list
 * @str: string pointer to be added to head
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	new->len = count;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
