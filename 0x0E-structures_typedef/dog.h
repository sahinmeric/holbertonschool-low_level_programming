#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * struct dog - structing a type of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner name
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MAIN_H */
