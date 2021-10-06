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

	if (x < 0)
	{
	last = last * -1;
	return (last);
	}
	_putchar(x + '0');
	return (last);
}
