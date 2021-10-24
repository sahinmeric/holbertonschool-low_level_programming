#include "main.h"
/**
 * _puts - prints a string
 *@s: The string to be printed to stdout
 *
 * Return: no return value
 */
void _puts(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
		_putchar('\n');
}
