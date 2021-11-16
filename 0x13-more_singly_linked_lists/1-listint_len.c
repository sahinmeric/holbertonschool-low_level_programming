#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elems in linked list_t
 *
 * @h: a pointer to a list_t head
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
	h = h->next;
	i++;
	}
	return (i);
}
