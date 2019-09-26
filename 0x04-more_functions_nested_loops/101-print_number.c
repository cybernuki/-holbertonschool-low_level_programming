#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: an intenger
 * Return: void
 */

void print_number(int n)
{
	int i, power;

	power = 1;
	while ((n / power) > 10)
	{
		power *= 10;
	}

	if (n < 0)
		_putchar('-');

	if (n == 0)
		_putchar('0');

	else
	{
		for (i = power; i >= 1 ; i /= 10)
		{
			_putchar(((n / i) % 10) + '0');
		}
	}
	_putchar('\n');
}
