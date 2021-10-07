#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - returns the largest of 3 numbers
 * @c: the value that will me checked for uppercase
 * Return: largest number
 */

int _isupper(int c)
{
	if (isupper(c))
	{
	_putchar('1');
	return (1);
	}
	else
	_putchar('0');
	return (0);
}
