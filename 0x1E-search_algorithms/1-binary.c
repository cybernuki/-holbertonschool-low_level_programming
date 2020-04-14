#include "search_algos.h"



/**
 *  aux_function - Let do the recursion for the binary search
 *  @array: Is the sub array
 *  @top: is the top index of the sub array
 *  @low: is the low index of the sub array
 *  @value: is the value to be searched
 *  Return: the index of the searched valued or -1
 */
int aux_function(int *array, size_t top, size_t low, int value)
{
    size_t mid, i;

    /*Print sub array */
    printf("Searching in array: ");
    for (i = low; i <= top; i++)
        (i < top) ? printf("%d,", array[i]) : printf("%d\n", array[i]);

    if (array[top] == value)
        return top;
    if (array[low] == value)
        return low;

    mid = (top + low) / 2;
    if (top == low)
        return (-1);
    if (value > array[mid])
        return aux_function(array, top, mid + 1, value);
    return aux_function(array, mid - 1, low, value);
}

/**
 * binary_search - Do a binary search
 * @array: is the given array
 * @size: is array's size
 * @value: is the value to be search
 * Return: Index where the value is or -1
 */
int binary_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);
    return aux_function(array, size - 1, (size_t) 0, value);
}