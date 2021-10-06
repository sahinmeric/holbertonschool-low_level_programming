#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: function prints natural numbers from n to 98.
 * @n: given number
 *
 * Return: 0 success
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (n != 98)
		{
		printf("%d", i);
		_putchar(',');
		_putchar(' ');
		}
		else
		printf("%d", i);
	}
}
