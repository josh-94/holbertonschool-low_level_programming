#include "dog.h"
/**
 * init_dog - prototype
 * @d: pointer to structure
 * @name: pointer to char
 * @age: dog's age
 * @owner: pointer to char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
