#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_most_numbers - prints from 0 to 9 without 2 and 4
 *
 * Return: 0 success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
	{
		continue;
	} else
	putchar(i + '0');
	}
}
