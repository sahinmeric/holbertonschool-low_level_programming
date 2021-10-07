#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_line - function that draws a straight line in the terminal.
 *@n: is the number of times the character _ should be printed
 * Return: 0 success
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar(10);
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	}
	_putchar(10);
}
