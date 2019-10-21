#ifndef _DOG
#define _DOG
/**
 * struct dog - is a struct of a dog
 * @name: Name of the dog
 * @age: Age of the dog.
 * @owner: Owner of the dog
 * Description: representate a data for a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include <stdlib.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
