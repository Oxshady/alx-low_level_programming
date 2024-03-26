#include "dog.h"
#include "string.h"
/**
 * new_dog - fuction that create new dog object
 * @name: name of the object
 * @age: age of the object
 * @owner: name of the owner of the object
 * Return: the address of the new object
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));
	char *dname = NULL, *downer = NULL;

	dname = malloc(strlen(name) + 1);
	downer = malloc(strlen(owner) + 1);
	if (dname)
	{
		strcpy(dname, name);
		new->name = dname;
		free(dname);
	}
	else
	{
		free(dname);
		free(downer);
		return (NULL);
	}
	if (downer)
	{
		strcpy(downer, owner);
		new->owner = owner;
		free(downer);
	}
	else
	{
		free(dname);
		free(downer);
		return (NULL);
	}
	new->age = age;
	return (new);
}
