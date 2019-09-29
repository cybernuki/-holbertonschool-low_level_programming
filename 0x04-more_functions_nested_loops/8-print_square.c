#include "holberton.h"
/**
 * print_square - prints a square, followeb by a new line
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	char character;
	int s_1, s_2;

	character = '#';
	if (size > 0)
	{
		for (s_1 = 0; s_1 < size; s_1++)
		{
			for (s_2 = 0; s_2 < size; s_2++)
			{
				_putchar(character);
			}
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
