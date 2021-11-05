#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: seperator of integers passed to func
 * @n: numbers of integer
 *Return: Return void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != 0 && i < (n - 1))
			printf("%s", separator);
	}
			printf("\n");
	va_end(ap);
}
