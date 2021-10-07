#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * more_numbers - prints from 0 to 14 ten times with new line
 *
 * Return: 0 success
 */

void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{

	for (i = 0; i <= 14; i++)
		{
		if (i > 9)
		{
		_putchar((i / 10) + 48);
		}
		_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
