#include "main.h"
#include "stdio.h"

/**
 * _abs - Entry point
 *
 * Description: Function that computes the absolute value of an integer.
 * @x: given value to check its absolute value
 * Return: 0 success
 */

int _abs(int x)
{
	if (x > 0 || x == 0)
	{
		return (x);
	}
	else
	return (x * (-1));
}
