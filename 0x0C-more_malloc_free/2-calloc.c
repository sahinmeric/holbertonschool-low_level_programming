#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_calloc - function that allocates memory for an array, using malloc.
 *
 *@nmemb: memory for an array of nmemb elements of size
 *@size: size of a type
 * Return: On success 0, on fail NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);
	if (array == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}


	return (array);
}
