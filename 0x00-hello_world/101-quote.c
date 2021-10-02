#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - program that prints a quote with a new line, to the standard error.
 *
 * Description: Longer description of the function)?
 * (* section header: Section description)*
 * Return: Description of the returned value
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
