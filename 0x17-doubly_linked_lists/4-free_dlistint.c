#include "lists.h"
/**
 * free_dlistint - function that frees the list.
 * @head: head pointer of double linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	*tmp = *head;
	if (head != NULL)
	{
		while (tmp != NULL)
		{
			head = tmp;
			tmp = tmp->next;
			free(tmp);
		}
	}
}
