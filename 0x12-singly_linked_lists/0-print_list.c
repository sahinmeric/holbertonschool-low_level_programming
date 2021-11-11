#include <stdio.h>
#include "main.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: a pointer to a list_t head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
	h = h->next;
	i++;
	}
	return (i);
}