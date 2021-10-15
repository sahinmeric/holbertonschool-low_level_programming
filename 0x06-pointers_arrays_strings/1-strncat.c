#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 *
 *@dest: destination of the string that will be added
 *@src: source of string to be added
 *@n: most n bytes from src that will be added to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
