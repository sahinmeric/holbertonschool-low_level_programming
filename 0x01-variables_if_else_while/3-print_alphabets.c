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
	char c;

	for (x = 'a'; x <= 'z'; x++)
		{
		x = tolower(x);
		putchar(x);
		}

	for (c = 'A'; c <= 'Z'; ++c)
		{
		putchar(c);
		}
		putchar('\n');
		return (0);
}
