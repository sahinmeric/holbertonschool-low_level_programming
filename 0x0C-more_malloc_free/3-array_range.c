#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range - function that creates an array of integers.
 *
 *@min: starting value
 *@max: ending value
 * Return: 0 On success, NULL on fail or if min > max
 */
int *array_range(int min, int max)
{
	int len, i;
	int *array;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	array = malloc(sizeof(int) * len);

	if (array == 0)
		return (NULL);

	for (i = 0; i < len; min++)
	{
		array[i] = min;
	}

	return (array);

}
