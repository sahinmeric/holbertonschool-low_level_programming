#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *
 *@d: name of new dog type
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner name of the dog
 *
 * Return: On success 0, on fail NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
