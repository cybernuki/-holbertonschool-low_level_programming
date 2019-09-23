#include "holberton.h"
#include <ctype.h>

/**
 * print_sign - evaluate the sign of a given number
 * @c: The number to be evaluate
 *
 * Return: 1 if it is positive and also print '+';
 * 0 if it is zero and print '0';
 * -1 if it is negative and print '-'
 */
int print_sign(int c)
{
	int result;

	if (c > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (c < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
