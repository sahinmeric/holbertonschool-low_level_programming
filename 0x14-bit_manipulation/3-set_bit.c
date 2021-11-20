#include "main.h"
/**
 *set_bit - function that sets the value of a bit to 1 at a given index.
 *@n: the number will be changed its bit
 *@index: index of bit
 *Return: return 1 if it worked or ¡1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
