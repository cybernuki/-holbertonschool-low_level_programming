#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1
 * Return: the converted number or 0 if: there is one or more chars in the
 * String b that are not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int isFirst = 1;

	if (b)
	{
		while (*b != '\0')
		{
			if (*b == '0' || *b == '1')
			{
				if (!isFirst)
					result <<= 1;
				else
					isFirst = 0;
				result ^= (*b - 48);
				b++;
			}
			else
			{
				result = 0;
				break;

			}
		}
	}
	return (result);
}
