#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a given string
 * @str: The string that to be printed half of it
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int halfLength = (length - 1) / 2;

	for (i = halfLength; i < length; i++)
	{
		putchar(str[i]);
	}
		putchar('\n');
}
