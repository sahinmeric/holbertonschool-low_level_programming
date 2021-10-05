#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Returns 0 success
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
		_putchar('\n');

		return (0);
}
