#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints a square, followed by a new line.
 * @n: is the number that should be printed
 * Return: 0 success
 */

void print_number(int n)
{
	if (n > 0)
	{
	_putchar((n / 100) + '0');
	_putchar((n % 10) + '0');
	}

	if (n < 0)
	{
	_putchar(45);
	}
}
