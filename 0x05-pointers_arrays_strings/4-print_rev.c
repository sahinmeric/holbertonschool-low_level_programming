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
int i = 0;
	while (s[i])
	i++;

	while (i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}
