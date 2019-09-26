#include "holberton.h"
/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 * using just two _putchar function
 * @void: doesn't recive any parameter
 * Return: doesn't return anything.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
