#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - function that runs before main
 *
 * Return: void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
