#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: principal string
 * @accept: substring
 * Return: the number of bytes in the initial segment of s wich consist
 * only of bytes for accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 1;
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				len++;
				break;
			}
		}
	}

	return (len);
}
