#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns thenth node
 * @head: head pointer of double linked list
 * @index: index
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
