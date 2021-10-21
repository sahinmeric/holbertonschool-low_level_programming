#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *
 *@n: the number that will be checked of its sqrt
 *
 * Return: 0, 1, -1 or sqrt of the number if it has a natural sqrt
 */
int sqr(int k)
{
	return (k * k);
}


int _sqrt_recursion(int n)
{
	int k = 1;
	int sqrk = sqr(k);

	if (n == 0 || n == 1 || n == -1)
	{
		return (n);
	}

	if (sqrk == n)
	{
		return (k);
	}
	if (sqrk > n)
	{
		return (-1);
	}
	else
	{
		return (sqr(k + 1));
	}
}
