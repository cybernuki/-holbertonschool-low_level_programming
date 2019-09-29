#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the square
 * Return: void
 */
void print_triangle(int size)
{
	char character;
	int s_1, s_2, spaces;

	character = '#';
	spaces = size - 1;
	if (size > 0)
	{
		for (s_1 = 0; s_1 < size; s_1++)
		{
			for (s_2 = 0; s_2 < size; s_2++)
			{
				if (s_2 < spaces)
					_putchar(' ');
				else
					_putchar(character);
			}
			spaces--;
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
