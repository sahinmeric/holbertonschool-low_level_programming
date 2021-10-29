#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc
 *
 *@b: amount of bytes that will be allocated
 * Return: On success 0, 98 on fail
 */
void *malloc_checked(unsigned int b)
{

	void *s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
