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
	int x;

	for (x = 'z'; x >= 'a'; x--)
		{
		x = tolower(x);
		putchar(x);
		}
		putchar('\n');
		return (0);
}
