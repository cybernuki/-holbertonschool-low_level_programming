#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: is the lenght of the line
 * Return: void
 */
void print_diagonal(int n)
{
	char character;
	int spaces, current_space;

	character = '\\';
	spaces = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			current_space = 0;

			while (current_space != spaces)
			{
				_putchar(' ');
				current_space++;
			}

			_putchar(character);
			_putchar('\n');

			spaces++;
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}

}
