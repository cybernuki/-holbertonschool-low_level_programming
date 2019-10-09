#include "holberton.h"
/**
 * _puts_recursion - prints a string to the standar output
 * in a recursive way.
 * @s: a pointer to the first value of the string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
