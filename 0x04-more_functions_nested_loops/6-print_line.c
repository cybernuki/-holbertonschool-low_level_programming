#include "holberton.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: is the lenght of the line
 * Return: void
 */
void print_line(int n)
{
	char character;

	character = '_';
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(character);
			n--;
		}
	}
	_putchar('\n');
}
