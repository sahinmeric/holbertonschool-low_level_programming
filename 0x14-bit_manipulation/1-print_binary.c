#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 *@n: the number will be printed in binary
 *Return: Return void on success
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	if (n == 0 || n == 1)
		_putchar(n + 48);

	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? _putchar('1') : _putchar('0');
}
