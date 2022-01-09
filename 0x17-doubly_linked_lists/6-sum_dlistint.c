#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data n.
 * @head: head pointer of double linked list
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (sum);
}
