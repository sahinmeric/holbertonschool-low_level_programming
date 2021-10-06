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
	while (n != 98)
	{
	printf("%d ", n);
	if (n > 98)
	{
		n--;
	}
	else
	{
		n++;
	}
	}
	printf("98\n");
}
