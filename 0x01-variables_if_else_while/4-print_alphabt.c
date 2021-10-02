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
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != 'e' && a != 'q')
	{
	putchar(a);
	}
	}
	putchar('\n');
	return (0);
}
