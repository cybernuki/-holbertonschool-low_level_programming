#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - Creates a new dog
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: a pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len, owner_len;
	dog_t *dog;

	if (name == NULL && owner == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len);
	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(owner_len);
	if (dog->owner == NULL)
		return (NULL);

	memcpy(dog->name, name, name_len);
	memcpy(dog->owner, owner, owner_len);
	dog->age = age;

	return (dog);
}
