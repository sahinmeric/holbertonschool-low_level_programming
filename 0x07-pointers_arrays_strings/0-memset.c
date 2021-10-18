#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte.
 *
 *@s: target memory area pointer
 *@b: constant byte that will be filled
 *@n: first n bytes of target memory
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(char));
	return (s);
}
