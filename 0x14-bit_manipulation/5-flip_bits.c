#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* flip_bits - function that returns the number of bits you would need
* to flip to get from one number to another.
*@n: first integer
*@m: second integer
* Return: number of bits need to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	int auxn = 0;
	int auxm = 0;
	int count = 0;

	for (j = 63; j >= 0; j--)
	{
		auxn = n >> j;
		auxm = m >> j;
		count += 1 & (auxn ^ auxm);
	}
		return (count);
}
