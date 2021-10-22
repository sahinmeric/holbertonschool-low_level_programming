#include "main.h"
#include <stdio.h>

/**
  * main - a function that prints all its args
  *@argc: count of the arguments
  *@argv: array of pointers to the strings which are those arguments
  * Return: exit status, 0 is success, other than 0 is error
  */
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);

	return (0);
}
