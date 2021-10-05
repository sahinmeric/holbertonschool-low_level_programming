#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: function that checks for lowercase character.
 * @c: argument that we will check the value
 * Return: returns void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	return (0);
}
