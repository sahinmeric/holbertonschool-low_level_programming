#include "main.h"
#include "stdio.h"

/**
 * print_last_digit - Entry point
 *
 * Description: Function that prints the last digit of a number.
 * @x: given number to check its last digit
 * Return: 0 success
 */

int print_last_digit(int x)
{
	int last = x % 10;

	if (last < 0)
	{
	last *= -1;
	_putchar(last + '0');
	return (last);
	}
	_putchar(last + '0');
	return (last);
}
