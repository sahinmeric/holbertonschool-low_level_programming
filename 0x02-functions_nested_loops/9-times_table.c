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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(j);
			_putchar(',');
			_putchar(i * j);
		}
	}
}
