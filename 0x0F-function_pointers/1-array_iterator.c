#include "function_pointers.h"
/**
 * array_iterator - it iterates an array and do a given action
 * @array: it is the array to be iterated
 * @size: is the large of the array
 * @action: is the given function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
