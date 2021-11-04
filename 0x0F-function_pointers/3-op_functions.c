#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - a function that sums a and b
 *
 *@a: first integer
 *@b: second integer
 *
 * Return: Returns sum of a and b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub- a function that calculates diffence of a and b
 *
 *@a: first integer
 *@b: second integer
 *
 * Return: Returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - a function that multiplies a and b
 *
 *@a: first integer
 *@b: first integer
 *
 * Return: Returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);

}

/**
 *op_div - a function that divides a to b
 *
 *@a: first integer
 *@b: second integer
 *
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - a function that calculates the remainder of the division of a by b
 *
 *
 *@a: first integer
 *@b: second integer
 *
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
