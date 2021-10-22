#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that i  multiplies two numbers.
  *@argc: count of the arguments
  *@argv: array of pointers to the strings which are those arguments
  * Return: exit status, 0 is success, other than 0 is error
  */
int main(int argc, char *argv[])
{
	int i, j, multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	multiply = i * j;

	printf("%d\n", multiply);

	return (0);
}
