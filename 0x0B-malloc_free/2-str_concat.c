#include "holberton.h"

int _strlen_recursion(char *s);

/**
 * str_concat - concatenate two strings in the dinamic memory
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the string in the dinamic memory,
 * NULL if the str parameter is NULL or the memory was insufficient
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size;
	char *p;

	len1 = (s1 == NULL) ? 0 : _strlen_recursion(s1);
	s1 = (s1 == NULL) ? "" : s1;
	len2 = (s2 == NULL) ? 0 : _strlen_recursion(s2);
	s2 = (s2 == NULL) ? "" : s2;

	size = (len1 + len2) * sizeof(char) + 1;
	p = create_array(size, '\0');

	if (p != NULL)
	{
		unsigned int i, j;

		for (i = 0; i < len1; i++)
			p[i] = s1[i];

		for (i = len1, j = 0; i < size && j < size - 1; i++, j++)
		{
			p[i] = s2[j];
		}
		return (p);
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

/**
 * create_array - Creates an array and fill it with an specific char
 * @size: is the size of the char
 * @c: is the char to fill the array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *p = (char *) malloc(size * sizeof(char));

		if (p != NULL)
		{
			unsigned int i = 0;

			while (i < size)
			{
				p[i] = c;
				i++;
			}
			return (p);
		}
		else
			return (NULL);
	}
	else
	{
		return (NULL);
	}
}
