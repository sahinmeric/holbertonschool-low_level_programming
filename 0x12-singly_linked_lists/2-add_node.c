#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: a pointer to a list_t
 * @str: a string that will be added
 * Return: returns a pointer that points a new list_t list
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	int len;
	list_t *new;

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
		new->next = *head;
	}
	*head = new;
	return (new);
}
