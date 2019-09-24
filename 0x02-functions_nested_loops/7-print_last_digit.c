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

	last_digit = c %  10;
	last_digit = (last_digit < 0) ? (last_digit * -1) : last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
