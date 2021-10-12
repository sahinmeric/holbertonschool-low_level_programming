#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: first int
 * @b: second int
 * Return: 0 success
 */

void swap_int(int *a, int *b)
{
	int t;

	t  = *a;
	*a   = *b;
	*b   =  t;
}
