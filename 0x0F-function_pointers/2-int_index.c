#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer.
 *
 *@array: array of ints
 *@size: size of array
 *@cmp: pointer to function
 * Return: void
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

		if (cmp(array[i] == 0))
		{
			return (-1);
		}

	}

	return (i);
}
