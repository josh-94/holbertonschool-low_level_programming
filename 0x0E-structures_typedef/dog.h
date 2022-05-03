#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
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
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
