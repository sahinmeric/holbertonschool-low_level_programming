#include <stdio.h>
/**
 * main - entry point
 * Description -Write a program that prints the numbers from 1 to 100
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz ");
		continue;
		}
		if (i % 3 == 0)
		{
		printf("Fizz ");
		continue;
		}
		if (i % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		printf("%d ", i);
	}
		putchar(10);

	return (0);
}
