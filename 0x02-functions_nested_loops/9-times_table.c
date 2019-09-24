#include "holberton.h"

/**
 * times_table - Prints 9 times table,
 * starting with 0
 * @void: No parameter
 *
 * Return: no return
 */

void times_table(void)
{
	int i, j, factor;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			factor = i * j;
			_putchar(',');
			_putchar(' ');
			if ((factor / 10) != 0)
			{
				_putchar((factor / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((factor % 10) + '0');
		}
		_putchar('\n');
	}
}
