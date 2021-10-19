#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk -  function locates the first occurrence
 * in the string s of any of the bytes in the string accept
 *@s: This is the C string to be scanned..
 *@accept: This is the C string containing the characters to match.
 *
 * Return: This function returns a pointer to the character
 * in str1 that matches one of the characters in accept,
 * or NULL if no such character isi found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);

	return (ret);
}
