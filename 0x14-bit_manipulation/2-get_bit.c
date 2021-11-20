#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n: given integer
 *@index: index of bit
 *Return: Returns: the value of the bit at index index
 *or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int idx_to_get;

	if (index > 63)
		return (-1);
	idx_to_get = 1 << index;
	if (n & idx_to_get)
		return (1);
	return (0);
}
