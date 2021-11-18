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


	listint_t *new, *temp, *aux;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (temp)
	{
		if (i == (idx - 1))
		{
			aux = temp->next;
			new->next = aux;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
