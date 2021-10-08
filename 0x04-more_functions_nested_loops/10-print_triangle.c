#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: 0 success
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i >= 0; i--)
	{
	for (j = 0; j < i; j++)
	printf(" ");

	for (j = i; j < size; j++)
	printf("#");

	printf("\n");
	}
}
