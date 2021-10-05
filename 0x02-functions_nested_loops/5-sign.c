#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description: function that prints the sign of a number.
 * @n: argument that we will check the value
 * Return: returns 1 if greater than zero or -1 if less than zero, 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	_putchar('0');
	return (0);
}
