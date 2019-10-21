#include "holberton.h"

int _strlen_recursion(char *s);

/**
 * argstostr - concatentes all the aruents of your program
 * @ac: is the number of arguments
 * @av: is all the strings
 * Return: a pointer to the array
 */
char *argstostr(int ac, char **av)
{
	if (ac > 0 && av != NULL)
	{
		int i, size = 0;
		char *p;

		for (i = 0; i < ac; i++)
			size += _strlen_recursion(av[i]);

		p = (char *) malloc(size + ac + 1 * sizeof(*p));

		if (p != NULL)
		{
			int i, j = 0;
			char *string;

			for (i = 0; i < ac; i++)
			{
				string = av[i];
				while (*string != '\0')
				{
					p[j] = *string;
					string++;
					j++;
				}
				p[j++] = '\n';
			}
			return (p);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}

/**
 * _strlen_recursion - returns the length of a string, recursively
 * @s: a pointer to the first value of the string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
