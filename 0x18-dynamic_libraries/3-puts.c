#include "holberton.h"
/**
 * _puts - Prints a string, followd by a new line, to stdout.
 *
 * @str: A string of chars
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
