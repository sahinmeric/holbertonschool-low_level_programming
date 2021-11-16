#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: a pointer to a list_t
 * @str: a string that will be added
 * Return: returns a pointer that points a new list_t list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);
	int len;
	list_t *new, *temp;

	if (s == NULL)
	{
		return (NULL);
	}
	for (len = 0; s[len]; len++)
	;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = s;
		new->len = len;
		new->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (*head);
}
