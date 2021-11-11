#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elems in linked list_t list.
 *
 * @h: a pointer to a list_t head
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
	h = h->next;
	i++;
	}
	return (i);
}
