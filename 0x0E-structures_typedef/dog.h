#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
 * struct dog - it's an structure
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
