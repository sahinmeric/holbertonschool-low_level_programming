#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that i  multiplies two numbers.
  *@argc: count of the arguments
  *@argv: array of pointers to the strings which are those arguments
  * Return: exit status, 0 is success, other than 0 is error
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int multiply = i * j;

	if (argc == 2)
	{
	printf("%d\n", multiply);
	}
	else
		printf("Error");

	return (0);
}
