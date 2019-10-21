#ifndef _DOG
#define _DOG
/**
 * struct dog - is a struct of a dog
 * @name: Name of the dog
 * @age: Age of the dog.
 * @owner: Owner of the dog
 * Description: representate a data for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdlib.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
