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
	int len1 = strlen(s1) + 1;
	int len2 = strlen(s2) + 1;
	char *array = (char *)malloc((len1 + len2) * (sizeof(char) + 1));
	int i;

	if (s1 == NULL || s2 == NULL || array == NULL || len1 == 1 || len2 == 1)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		array[i] = s1[i];
	}

while (i != '\0')
	{
	array[i] = s2[i];
	i++;
	}
	return (array);
}
