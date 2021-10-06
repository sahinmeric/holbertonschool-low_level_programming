#include "main.h"
#include "stdio.h"

/**
 * times_table - Entry point
 *
 * Description: function that prints the 9 times table, starting with 0.
 *
 * Return: 0 success
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 0; j < 10; j++)
			_putchar(',');
			_putchar(' ');
		k = i * j;

		if (k < 10)
		{
			_putchar(' ');
		} else
		{
			_putchar((k / 10) + '0');
		}
		_putchar((k % 10) + '0');
		}
		_putchar('\n');
}


