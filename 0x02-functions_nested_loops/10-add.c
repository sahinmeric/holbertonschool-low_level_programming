#include "main.h"

/**
 * add - Entry point
 *
 * Description: Function that adds two integers and returns the result.
 * @x: given number
 * @y: another given number to sum
 * Return: 0 success
 */

int add(int x, int y)
{
	int sum = x + y;

	add(x, y);
	return (sum);
}
