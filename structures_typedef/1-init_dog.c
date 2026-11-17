#include "dog.h"

/**
 * init_dog - Initializes the dog's structure
 * @d: pointer to dog struct
 * @name: pointer to the dog's name
 * @age: float to the dog's age
 * @owner: pointer to the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
