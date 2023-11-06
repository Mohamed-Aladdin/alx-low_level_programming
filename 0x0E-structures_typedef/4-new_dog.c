#include "dog.h"
#include "1-strdup.c"

/**
 * *new_dog - creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Return: dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
		return (NULL);

	doggo->name = _strdup(name);

	if (doggo->name == NULL)
	{
		free(doggo);
		
		return (NULL);
	}

	doggo->owner = _strdup(owner);

	if (d->owner == NULL)
	{
		free(doggo->name);
		free(doggo);

		return (NULL);
	}
	
	doggo->age = age;

	return (doggo);
}
