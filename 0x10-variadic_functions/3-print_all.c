#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - function that prints anything
 *
 * @format: seperator of integers passed to func
 * Return: Return void
 */
void print_all(const char * const format, ...)
{
	int i = 0, len = 0;
	char *str, *separator = ", ";
	va_list args;

	va_start(args, format);
	while (format[len])
		len++;
	while (format && format[i])
	{
		if (i == len - 1)
			separator = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
			break;
			case 'i':
				printf("%d%s", va_arg(args, int), separator);
			break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
			break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)%s", separator);
					break;
				}
				printf("%s%s", str, separator);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
