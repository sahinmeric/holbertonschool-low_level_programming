#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_square - function that prints a square, followed by a new line.
 * @n: is the number of times the character # should be printed
 * Return: 0 success
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
			_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		{
		_putchar(10);
		}
}
