#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: pointer variable
 * @name: variable one
 * @age: variable two
 * @owner: variable three
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
