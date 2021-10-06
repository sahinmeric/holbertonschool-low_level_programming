#include "main.h"
#include "stdio.h"

/**
 * jack_bauer - Entry point
 *
 * Description: Function prints every minute of the day from 00:00 to 23:59
 *
 * Return: 0 success
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
		}
	}
}
