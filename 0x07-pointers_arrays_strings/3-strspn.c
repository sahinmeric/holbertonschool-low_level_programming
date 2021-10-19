#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *@s: string to be scanned.
 *@accept: string containing the characters to match
 *
 * Return: returns the number of characters
 * in the initial segment of s
 * which consist only of characters
 * from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
