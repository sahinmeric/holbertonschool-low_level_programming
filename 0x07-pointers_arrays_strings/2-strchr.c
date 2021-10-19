#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 *
 *@s: string
 *@c: the char that pointer will be returned
 *
 * Return: returns a pointer to the first occurrence of the character c
 * in the string str
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
