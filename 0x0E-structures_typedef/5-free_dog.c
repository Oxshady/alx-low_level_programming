#include "dog.h"
/**
 * free_dog - fuction that free the dog object
 * @d: the dog object
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
