#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index- function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: a pointer to a list_t
 * @index: index of node list
 * Return: returns apointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	for (i = 0 ; i < index; i++)
	{
		temp = head;
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (temp);

}
