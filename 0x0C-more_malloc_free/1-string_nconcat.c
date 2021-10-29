#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 *string_nconcat - function that concatenates two strings.
 *
 *@s1: first string
 *@s2: second string
 *@n: nth bytes of s2
 * Return: On success 0, on fail NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, i, j;
	char *str;

	if (s1 == 0)
		s1 = "";

	length1 = _strlen(s1);

	if (s2 == 0)
		s2 = "";

	length2 = _strlen(s2);

	if (n > length2)
		n = length2;
	str = malloc(sizeof(char) * (length1 + n + 1));

	if (str == 0)
		return (0);

	for (i = 0; i < length1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; i++, j++)
		str[i] = s2[j];

	str[i] = 0;
	return (str);
}
