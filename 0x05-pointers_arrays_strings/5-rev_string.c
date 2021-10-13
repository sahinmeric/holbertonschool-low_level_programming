#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: The string that to be printed in reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	int tmp;
	int j;

	length = strlen(s) - 1;

	j = 0;
	while (j < length)
	{
	tmp = s[j];
	s[j] = s[length];
	s[length] = tmp;
	length--;
	j++;
	}
}
