#include "function_pointers.h"
/**
 * print_name - it prints a name using a given way
 * @name: is the name of the function
 * @f: is the given function that will print the name
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
