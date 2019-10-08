#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two digonals of a square matrix of
 * integers.
 * @a: the matrix in a linear way
 * @size: the size of the matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i, j;

	for (i = 0; i < (size * size); i += size + 1)
	{
		diag1 += a[i];
	}

	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		diag2 += a[j];
	}
	printf("%d, %d\n", diag1, diag2);
}
