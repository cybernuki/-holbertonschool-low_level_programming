#include "holberton.h"

int _strlen_recursion(char *s);

/**
 *_strdup - duplicates a string to a dinamic memory
 * @str: string to be duplicated
 * Return: NULL if the str parameter is NULL or the memory was insufficient
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		int len = _strlen_recursion(str);
		char *p = (char *) malloc(len * sizeof(char));

		if (p != NULL)
		{
			int i = 0;

			while (i < len)
			{
				p[i] = str[i];
				i++;
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
		return (1);
	else
		return (_strlen_recursion(s + 1) + 1);
}
