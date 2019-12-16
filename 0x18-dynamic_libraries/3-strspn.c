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
	int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				break;
			}
		}

		if (accept[j] != s[i])
			break;

	}

	return (len);
}
