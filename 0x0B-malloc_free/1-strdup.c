#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup -  function that returns a pointer to a newly allocated space in memr
 *which contains a copy of the string given as a parameter.
 *
 *@str: string that will be duplicated
 * Return: On success 0
 * On error, NULL if the size is 0 or if it fails
 */
char *_strdup(char *str)
{

	char *array;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		array[j] = str[j];
	}

	return (array);
}
