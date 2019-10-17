#include "holberton.h"
/**
 * _calloc - allocaes memory for an array, using malloc, and set all
 * entries with 0.
 * @nmemb: is the number of elements of the array
 * @size: is the size of bytes of each element
 * Return: a pointer to the memory space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
