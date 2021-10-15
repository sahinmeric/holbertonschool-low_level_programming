#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 *@s: string that will be capitalized
 *
 * Return: 0 success
 */
char *string_toupper(char *s)
{
	char ch;
	int i;

	while (s[i])
	{
	ch = s[i];
	_putchar(toupper(ch));
	i++;
	}
	return (0);
}
