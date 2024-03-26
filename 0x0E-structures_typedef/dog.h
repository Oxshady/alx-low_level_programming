#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - contain info about object (dog)
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
