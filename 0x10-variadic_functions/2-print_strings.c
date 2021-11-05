#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - function that prints strings, followed by a new line.
 *
 * @separator: seperator of integers passed to func
 * @n: numbers of integer
 *Return: Return void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != 0 && i < (n - 1))
			printf("%s", separator);
	}
			printf("\n");
	va_end(ap);
}
