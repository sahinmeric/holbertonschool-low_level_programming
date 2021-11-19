#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 *@n: the number will be printed in binary
 *Return: Return void on success
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	if (n == 0 || n == 1)
		_putchar(n + 48);

	else
	{
		i = i << 63;
		while (i > 0)
		{
			if (n & i)
				break;
			i = i >> 1;
		}
		while (i > 0)
		{
			(n & i) ? _putchar('1') : _putchar('0');
			i = i >> 1;
		}
	}
}
