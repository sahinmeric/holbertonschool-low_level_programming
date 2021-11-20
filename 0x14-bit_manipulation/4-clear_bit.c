#include "main.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index.
 *@n: given number
 *@index: index of bit
 *Return: return 1 if it worked or ¡1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
