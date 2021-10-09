#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * prime_factor - Finds and prints the largest prime factor
 * of the number 612852475143
 * @n: size of the triangle
 * Return: 0 success
 */

void prime_factor(int n)
{
	int i;
	int largest;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
	{
		largest = i;
		n = n / i;
	}
	}
		if (n > 2)
		{
		largest = n;
		}

		printf("%d\n", largest);
}
