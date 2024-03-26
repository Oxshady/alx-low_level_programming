#include "dog.h"
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if(!d->name)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->owner);
	putchar('\n');
}
