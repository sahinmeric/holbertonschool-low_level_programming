#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - func that adds a new node at the end of a listint_t list.
 *
 * @head: a pointer to a list_t
 * @n: the int that will be added to new node
 * Return: returns a pointer that points a new list_t list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int k = n;

	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = k;
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
