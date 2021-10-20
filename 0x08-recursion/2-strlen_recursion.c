#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 *@s: string that will be calculated its length
 * Return: length in integer
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		len++;
		_strlen_recursion(++s);
	}
	else
	{
	printf("%d", len);
	}
	return (0);
}
