#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks whether a character is an uppercase alphabet (A-Z) or not.
 * @c: given char
 * Return: 1 if it is upper, else return 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	return (0);
}
