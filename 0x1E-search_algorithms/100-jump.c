#include "search_algos.h"

/**
 *  jump_search - Do a jump search on an array
 *
 *  @array: is the given array with the data
 *  @size: is the size of the array
 *  @value: is the value to be searched
 *  Return: the index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int m = 0, low = 0, top = 0, result = -1;

	if (!array)
		return (-1);

	m = sqrt(size);
	for (low = 0; low < (int)size; low += m)
	{
		top = low + m;

		if (top >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, top);
			result = linear_search_aux(array, size, low, top, value);
			break;
		}

		if (array[low] <= value)
			printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] <= value && value <= array[top])
		{
			printf("Value found between indexes [%d] and [%d]\n", low, top);
			result = linear_search_aux(array, size, low, top, value);
			break;
		}
	}

	return (result);
}

/**
 *  linear_search_aux -  do a linear search algorithm on an array
 *  @arr: Is the array with the data
 *  @size: Is the size of the array
 *  @low: Is the low index
 *  @top: Is the top index
 *  @value: Is the value to search
 *  Return: The index where the value is or -1 in case of be missing
 */
int linear_search_aux(int *arr, size_t size, size_t low, size_t top, int value)
{
	int i, finded = 0;

	if (!arr)
		return (-1);

	if (top >= size)
		top = size - 1;
	for (i = low; i <= (int)top; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, arr[i]);
		if (arr[i] == value)
		{
			finded = 1;
			break;
		}
	}

	return ((finded) ? i : -1);
}
