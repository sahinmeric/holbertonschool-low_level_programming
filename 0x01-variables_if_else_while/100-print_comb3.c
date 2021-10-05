#include <stdio.h>

/**
 * main - program that prints all combinations of two digits
 *
 * Description: Longer description of the function)?
 * (* section header: Section description)*
 * Return: Description of the returned value
 */

int main(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{

	for (j = '0'; j <= '9'; j++)
	{

	putchar(i);
	putchar(j);

	if (i != '9' || j != '8')
	{

	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
