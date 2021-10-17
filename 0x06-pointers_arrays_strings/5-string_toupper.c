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
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] > 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
