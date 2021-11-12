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
	int len = strlen(s);
	list_t *new;

	if (s == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(s);
		return (NULL);
	}
	else
	{
		new->str = s;
	/*	printf("new-> str = %s\n", s);*/
		new->len = len;
	/*	printf("new-> len = %d\n", len);*/
		new->next = NULL;
		new->next = *head;
	/*	printf("new->next =%d\n",&head);*/
	}
	*head = new;
	return (new);
}
