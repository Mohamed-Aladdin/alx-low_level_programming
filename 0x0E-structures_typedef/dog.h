#ifndef _DOG_
#define _DOG_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a new type.
 * @name: The name of the dog.
 * @age: The age of dog.
 * @owner: The owner of dog.
 *
 * Description: A new type of doggos.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _strlen(char *s);
char *_strdup(char *str);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_ */
