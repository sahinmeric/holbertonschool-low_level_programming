#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - function that compares two strings.
 *
 *@a: array of integers that will be reversed
 *@n: number of elements of the array
 *
 * Return: 0 success
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
