#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * @void: does not recive any parameter
 *
 * Return: does not has any return
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 10; i > 0; i--)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
