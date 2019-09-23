#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a given number
 * @c: The number
 *
 * Return: The last digit of the number
 */
int print_last_digit(int c)
{
	int last_digit;

	c = _abs(c);
	last_digit = c % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
