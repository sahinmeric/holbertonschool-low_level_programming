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
	int i;
	int j;

	for (i = 48; i <= 56; i++) /* i = 0; i <= 8 */
	{

	for (j = i + 1; j <= 57; j++) /*j = i + 1; j <=9 */
	{

	putchar(i);
	putchar(j);

	if (i != 56 || j != 57)
	{

	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
