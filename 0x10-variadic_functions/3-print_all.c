#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - function that prints anything
 *
 * @format: seperator of integers passed to func
 *Return: Return void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format != NULL)
	{

		switch (format[i])
		{
		case 'c':
				printf("%c", va_arg(args, int));
				break;

		case 'i':
				printf("%d", va_arg(args, int));
				break;

		case 'f':
				printf("%f", va_arg(args, double));
				break;

		case 's':
				str = va_arg(args, char *);

				if (str == NULL)
					str = "(nil)";

				printf("%s", va_arg(args, char *));
				break;

		}

	}
	printf("\n");
	va_end(args);
}
