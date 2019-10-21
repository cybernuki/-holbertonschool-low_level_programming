#include "holberton.h"
/**
 * create_array - Creates an array and fill it with an specific char
 * @size: is the size of the char
 * @c: is the char to fill the array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *p = (char *) malloc(size * sizeof(char));

		if (p != NULL)
		{
			unsigned int i = 0;

			while (i < size)
			{
				p[i] = c;
				i++;
			}
			return (p);
		}
		else
			return (NULL);
	}
	else
	{
		return (NULL);
	}
}
