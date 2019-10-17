#include "holberton.h"
int _strlen_recursion(char *s);
/**
 * string_nconcat - concatenates the first n bytes of a string to another
 * @s1: string target
 * @s2: string origin
 * @n: number of bytes to be concatenates
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	int index = 0, size1 = 0, size2 = 0;
	char *p;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	size1 = _strlen_recursion(s1);
	size2 = _strlen_recursion(s2);

	size2 = (n < size2) n : size2;
	p = malloc(size1 + size2 + 1);

	if (p == NULL)
		return (NULL);

	while (s1[i] != '\0')
		p[index++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && i < n)
		p[index++] = s2[i++];

	p[index] = '\0';
	return (p);
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
