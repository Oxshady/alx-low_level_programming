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

	if (new == NULL)
		return (NULL);
	char *dname = NULL;
	char *downer = NULL;

	if (name)
	{
		dname = malloc(strlen(name) + 1);
		if (dname == NULL)
		{
			free(new);
			return (NULL);
		}
		strcpy(dname, name);
		new->name = dname;
	}
	else
	{
		new->name = NULL;
	}

	if (owner)
	{
		downer = malloc(strlen(owner) + 1);
		if (downer == NULL)
		{
			free(new->name), free(new);
			return (NULL);
		}
		strcpy(downer, owner);
		new->owner = downer;
	}
	else
		new->owner = NULL;
	new->age = age;
	return (new);
}
