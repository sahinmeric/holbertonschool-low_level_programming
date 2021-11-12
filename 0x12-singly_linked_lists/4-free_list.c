#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: a pointer to a list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (head != NULL)
	{
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
