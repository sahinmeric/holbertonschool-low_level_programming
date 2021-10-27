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
	int len = strlen(str);
	char *array = (char *)malloc(len * sizeof(char) + 1);
	int i;

	if (array == NULL || str == NULL)
	{
		return (NULL);
	}
	if (str == 0)
	{
		return (0);
	}
	if (len == 1)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}
	return (array);
	free(array);
}
