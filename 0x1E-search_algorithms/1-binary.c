#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using binary search
 *
 * @array: the array for searching
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the first match or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, idx, start = 0;

	if (array == NULL)
		return (-1);

	size--;
	while (start <= size)
	{
		printf("Searching in array: ");
		for (idx = start; idx <= size; idx++)
		{
			printf("%d", array[idx]);
			if (idx != size)
				printf(", ");
			else
				printf("\n");
		}
		mid = (start + size) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			size = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
