#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: The string that to be printed in reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int k;
	int tmp;
	int i;
	int j;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
	k++;
	i++;
	}
	k -= 1;
	j = 0;
	while (j < k)
	{
	tmp = s[j];
	s[j] = s[k];
	s[k] = tmp;
	k--;
	j++;
	}
}
