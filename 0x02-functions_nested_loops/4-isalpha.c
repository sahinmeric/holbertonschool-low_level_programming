#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: function that checks for alphabetic character.
 * @c: argument that we will check the value
 * Return: returns void
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
	return (1);
	}
	else
	return (0);
}
