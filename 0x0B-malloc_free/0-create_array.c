#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -  function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of an array
 *@c:char that array will be initialized
 * Return: On success 0
 * On error, NULL if the size is 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	array[0] = c;

	return (array);
}
