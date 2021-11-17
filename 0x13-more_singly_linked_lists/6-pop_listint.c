#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint- function that deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: a pointer to a list_t
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int k;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	k = temp->n;
	free(temp);
	return (k);

}
