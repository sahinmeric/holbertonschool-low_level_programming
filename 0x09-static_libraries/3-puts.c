#include "main.h"

void _puts(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
		_putchar('\n');
}
