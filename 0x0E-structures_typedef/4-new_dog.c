#include "dog.h"
char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);

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

	name_len = sizeof(name);
	owner_len = sizeof(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_memcpy(dog->name, name, name_len);
	_memcpy(dog->owner, owner, owner_len);
	dog->age = age;

	return (dog);
}
/**
 * _strlen - returns the length of a string, recursively
 * @s: a pointer to the first value of the string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (_strlen(s + 1) + 1);
}

/**
 * _memcpy - copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes to copie
 * Return: a pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
