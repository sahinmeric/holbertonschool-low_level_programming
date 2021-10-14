#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: a string that will be converted into integers
 * Return: 0 success
 */

int _atoi(char *s)
{
	int converted;

	converted = atoi(s);

	return (converted);
}
