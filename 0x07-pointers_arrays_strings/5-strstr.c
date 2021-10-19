#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr -  function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 *@haystack: This is the main C string to be scanned.
 *@needle: This is the small string to be searched with-in haystack string
 *
 * Return: returns a pointer to the first occurrence in haystack
 * of any of the entire sequence of characters specified in needle,
 * or a null pointer if the sequence is not present in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);

	return (ret);
}
