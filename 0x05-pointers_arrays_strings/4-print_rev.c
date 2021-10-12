#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The string that to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length, i, lindex, rindex;
	char tmp;

	length = strlen(s);
	lindex = 0;
	rindex = length - 1;

	for (i = lindex; i < rindex; i++)
	{
		tmp = s[i];
		s[i] = s[rindex];
		s[rindex] = tmp;
		rindex--;
	}
	printf("%s", s);
}
