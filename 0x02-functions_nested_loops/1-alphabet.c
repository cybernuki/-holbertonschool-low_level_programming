#include "holberton.h"
/**
 * print_alphabet - writes the character c to stdout
 * @void: no parameter
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
