#include "main.h"
#include <stdio.h>

/**
  * calculate - asdasdas
  *@k: starting point
  *@n: given number
  * Return: 0, 1, -1 or sqrt of the number if it has a natural sqrt
  */
int calculate(int n, int k)
{
	int sqrtk = k * k;

	if (sqrtk == n)
	{
		return (k);
	}
	if (sqrtk > n)
	{
		return (-1);
	}
	else
	{
		return (calculate(n, k + 1));
	}
}
/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: given number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1 || n == -1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (calculate(n, 1));
	}
}
