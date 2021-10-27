#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *array = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	int i, j;

	if (array == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; i < len1; i++)
		*(array + i) = *(s1 + i);
	for (j = 0; j < len2; j++)
		*(array + (i + j)) = *(s2 + j);

	return (array);
}
