#include "holberton.h"
/**
 * _print_rev_recursion - Prints a string in revers recursively
 * @s: a pointer to the first value of the string
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
