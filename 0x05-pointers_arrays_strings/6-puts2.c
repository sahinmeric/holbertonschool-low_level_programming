#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string.
 * @str: The string that to be printed some of its chars
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
		putchar('\n');
}
