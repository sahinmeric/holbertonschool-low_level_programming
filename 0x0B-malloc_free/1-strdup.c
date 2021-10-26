#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup -  function that returns a pointer to a newly allocated space in memr
 *which contains a copy of the string given as a parameter.
 *
 *@str: size of an array
 * Return: On success 0
 * On error, NULL if the size is 0 or if it fails
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *array = (char *)malloc(len * sizeof(char));

	if (len == 0)
	{
		return (NULL);
	}

	return (array);
}