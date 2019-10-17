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
	void *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);


	return (memset(p, 0, nmemb));
}
