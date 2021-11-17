#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given pos.
 *
 * @head: a pointer to a list_t
 * @idx: index
 * @n: n value of new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	for (i = 0; i < idx; i++)
	{
		*head = (*head)->next;

		if (*head == NULL)
			return (NULL);

		new->next = *head;
		new->n = n;
		*head = new;
	}
	return (*head);
}
