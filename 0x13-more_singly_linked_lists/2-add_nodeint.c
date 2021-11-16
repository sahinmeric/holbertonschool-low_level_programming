#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -func that adds a new node at the beginning of a listint_t list.
 *
 * @head: a pointer to a list_t
 * @n: the int that will be added
 * Return: returns a pointer that points a new listint_t list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int k = n;
	listint_t *new;


	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = k;
		new->next = *head;
	}
	*head = new;
	return (new);
}
