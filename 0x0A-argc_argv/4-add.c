#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that adds positive numbers.
  *@argc: count of the arguments
  *@argv: array of pointers to the strings which are those arguments
  * Return: exit status, 0 is success, other than 0 is error
  */
int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/*  check if there is a symbol or character in the given numbers
		 *  if there is print Error\n and return 1
		 **/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 58 || argv[i][j] <= 47)
				{
					printf("Error\n");
					return (1);
				}
		}

		/* add the given numbers and return result */

		res = res + atoi(argv[i]);
	}
		printf("%d\n", res);

		return (0);
}
