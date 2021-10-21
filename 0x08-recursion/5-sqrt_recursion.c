#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *
 *@n: the number that will be checked of its sqrt
 *
 * Return: 0, 1, -1 or sqrt of the number if it has a natural sqrt
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int k = i * i;

	if (n == 0 || n == 1 || n == -1)
	{
		return (n);
	}


	if (k == n)
	{
		return (i);
	}
	if (k > n)
	{
		return (-1);
	}
	else
	{
		return (i * _sqrt_recursion(i + 1));
	}
}
