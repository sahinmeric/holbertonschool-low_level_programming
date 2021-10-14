#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 *
 *@dest: destination of the string that will be added
 *@src: source of string to be added
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
