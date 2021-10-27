#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *str_concat -function that concatenates two strings.
 *
 *@s1: string that will be concatenated
 *@s2: string that will be concatenated
 * Return: On success 0
 * On error, NULL if the size is 0 or if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	char *array;
	int i, j = 0;
	int k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	len = i + j;
	array = (char *)malloc(sizeof(char) * (len + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
		*(array + k) = *(s1 + k);
	for (l = 0; l < j; l++)
		*(array + (k + l)) = *(s2 + l);

	return (array);
}
