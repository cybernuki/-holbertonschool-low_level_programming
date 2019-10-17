#include "holberton.h"
/**
 * array_range - creates an ascendet integer array that start in min
 * an go to max value.
 * @min: is the minimun value
 * @max: is the maximun value
 * Return: a pointer to the array or NULL if something went wrong
 */
int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(size * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
