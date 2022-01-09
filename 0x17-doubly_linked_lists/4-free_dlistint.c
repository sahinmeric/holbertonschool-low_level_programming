#include "lists.h"
/**
 * free_dlistint - function that frees the list.
 * @head: head pointer of double linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
