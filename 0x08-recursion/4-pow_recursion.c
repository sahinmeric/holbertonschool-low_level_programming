#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - function that returns the value of x raised to power of y
 *
 *@x: base number
 *@y: power
 * Return: result of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 1)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}

}
