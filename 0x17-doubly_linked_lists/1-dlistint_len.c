#include "lists.h"
/**
 * dlistint_len - returns the number of the elements in a dlistint_t list.
 * @h: head pointer of double linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
