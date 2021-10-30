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
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	return (ptr);
}
