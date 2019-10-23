#include "function_pointers.h"
/**
 * int_index - search for an integer with a given comparation
 * @array: is the array
 * @size: is how long is the array
 * @cmp: kind of comparation
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
