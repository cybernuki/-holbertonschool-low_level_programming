#include "search_algos.h"

/**
 *  linear_search -  do a linear search algorithm on an array
 *  @array: Is the array with the data
 *  @size: Is the size of the array
 *  @value: is the value to search
 *  Return: The index where the value is or -1 in case of be missing
 */
int linear_search(int *array, size_t size, int value)
{
	int i, finded = 0;

	if (!array)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			finded = 1;
			break;
		}
	}

	return ((finded) ? i : -1);
}
