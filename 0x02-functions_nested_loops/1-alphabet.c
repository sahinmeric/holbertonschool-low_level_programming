#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Returns 0 success
 */

void  print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
		_putchar('\n');
}
