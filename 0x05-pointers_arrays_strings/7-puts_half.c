#include "holberton.h"
/**
 * puts_half - that prints half of a string, followed by a new line.
 * @str: a string of chars
 * Return: void
 */
void puts_half(char *str)
{

	int size, half, i;

	size = 0;
	while (str[size] != '\0')
		size++;

	half = size / 2;
	for (i = half; i < size; i++)
	{

		_putchar(str[i]);
	}
	_putchar('\n');

}
