#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 *@dest: target memory area pointer
 *@src: source memory area pointer
 *@n: first n bytes of source memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
