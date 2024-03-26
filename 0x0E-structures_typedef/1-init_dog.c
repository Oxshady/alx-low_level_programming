#include "dog.h"
/**
 * init_dog - function that initialize dog object
 * @d: the dog object we will initialize
 * @name: the name we will set for the object
 * @age: the age we will set for the object
 * @owner: the owner name we will set for the object
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
