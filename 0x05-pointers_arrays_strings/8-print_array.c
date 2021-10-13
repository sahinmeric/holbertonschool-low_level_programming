#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: n elements that will be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
		putchar(',');
		putchar(' ');
		}
	}
		putchar('\n');
}
