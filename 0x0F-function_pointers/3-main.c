#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main -  entry point
 *
 *@argc: number of arguments
 *@argv: arguments
 * Return: returns a pointer to the function
 * that corresponds to the operator given as a parameter.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

