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
	int k;

	for (i = 48; i <= 55; i++) /* i = 0; i <= 8 */
	{

	for (j = i + 1; j <= 56; j++) /*j = i + 1; j <=9 */
	{
	for (k = j + 1; k <= 57; k++)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i != 55 || j != 56 || k != 57)
	{

	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
