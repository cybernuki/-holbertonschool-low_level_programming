#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: given number
 *
 * Return: does not have return
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

                /*update*/
		n = (n < 98) ? (n + 1) : (n - 1);
	}
	printf("98\n");
}
