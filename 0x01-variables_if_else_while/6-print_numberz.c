#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: Generate random number and assign it to a variable
 *
 * Return: Returns 0 success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
