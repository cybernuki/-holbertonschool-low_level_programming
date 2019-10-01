#include "holberton.h"
/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: A string of chars
 * Return: void
 */
void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
		s++;

	while (s != start)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
