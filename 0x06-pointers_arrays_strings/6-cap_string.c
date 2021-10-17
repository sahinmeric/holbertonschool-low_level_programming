#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - function that capitalizes all words of a string.
 *
 *@s: string that will be capitalized of its words
 *
 * Return: the string with capitalized words
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == s[0])
			{
				if (s[i] >= 97 && s[i] <= 122)
					{
						s[i] = s[i] - 32;
					}
			}
	if (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == 44
			|| s[i] == 59 || s[i] == 46 || s[i] == 33
			|| s[i] == 34 || s[i] == 63 || s[i] == 40
			|| s[i] == 41 || s[i] == 123 || s[i] == 125)
	{
		i++;
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else
		{
			i--;
		}
	}
	i++;
	}
	return (s);
}
