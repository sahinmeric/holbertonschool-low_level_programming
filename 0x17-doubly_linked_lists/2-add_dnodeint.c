#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of list.
 * @head: head pointer of double linked list
 * @n: integer
 * Return: the address of new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head ==  NULL)
		*head = new;
	else
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
