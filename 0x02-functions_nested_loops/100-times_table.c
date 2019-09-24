#include "holberton.h"
/**
 * print_times_table - prints the n times,
 * table, starting with 0.
 * @n: given n times
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int i, j, factor, first_digit, medium_digit, last_digit;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				factor = (i * j);
				last_digit = (factor % 10);
				medium_digit = ((factor / 10) % 10);
				first_digit = ((factor /10) / 10);

				_putchar(',');
				_putchar(' ');

				if (first_digit != 0)
					_putchar('0' + first_digit);
				else
					_putchar(' ');

				if ((medium_digit == 0  && first_digit != 0)
				    || (medium_digit > 0 && first_digit == 0))
					_putchar('0' + medium_digit);
				else
					_putchar(' ');

				_putchar('0' + last_digit);
			}
			_putchar('\n');
		}
	}
}
