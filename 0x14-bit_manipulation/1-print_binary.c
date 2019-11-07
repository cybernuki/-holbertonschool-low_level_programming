#include <limits.h>
#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: is the given number
 * Return: Nothign
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int firstBit = 0;

	if (n == 0)
		printf("0");

	else
	{
		mask <<= 63;
		while (mask)
		{
			if ((n & mask) == 0 && firstBit)
				printf("0");
			if ((n & mask) != 0)
			{
				printf("1");
				firstBit = 1;
			}
			mask >>= 1;
		}
	}
}
