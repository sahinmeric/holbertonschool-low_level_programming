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
	if (n > 48)
	{
	return (1);
	_putchar(43);
	}
	else if (n < 48)
	{
	return (-1);
	_putchar(45);
	}
	else
	_putchar(48);
	return (0);
}
