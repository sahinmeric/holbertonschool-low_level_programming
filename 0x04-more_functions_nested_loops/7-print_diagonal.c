#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_diagonal - function that draws a straight line in the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 2; j <= i; j++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
		_putchar(10);
	}
}
