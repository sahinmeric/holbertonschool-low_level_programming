#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function that copies a strings.
 *
 *@dest: destination of the string that will be copied
 *@src: source of string to be copied
 *@n: most n bytes from src that will be copied to dest
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
