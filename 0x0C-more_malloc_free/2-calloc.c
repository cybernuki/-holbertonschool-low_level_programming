#include "holberton.h"
#include <string.h>
/**
 * _calloc - allocaes memory for an array, using malloc, and set all
 * entries with 0.
 * @nmemb: is the number of elements of the array
 * @size: is the size of bytes of each element
 * Return: a pointer to the memory space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	i = 0;

	for (i = 0; i < nmemb * size; i += size)
		p[i] = 0;

	return (p);
}
