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
	char temp;
	int left, right;

	left = 0;
	right = 0;

	right = strlen(s - 1);

	while (left < right)
	{
	temp = s[right];
	s[right] = s[left];
	s[left] = temp;
	left++;
	right--;
	}
	printf("%s", s);
}
