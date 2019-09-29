#include <stdio.h>
#include <math.h>
/**
 * main - prints the first 98 fibonacci numbers
 * @void: It doesn't recive any parameter
 * Return: 0 - 1 or -1
 */
int main(void)
{
	int i, j;
	double Phi, phi, first_part, second_part;

	i = 11;
	Phi = (1 + sqrt(5)) / 2;
	phi = (1 - sqrt(5)) / 2;

	for (i = 2; i <= 99; i++)
	{
		first_part = 1;
		second_part = 1;
		for (j = 0; j < i; j++)
		{
			first_part *= Phi;
			second_part *= phi;
		}

		printf("%1.0f", ((first_part - second_part) / sqrt(5)));

		if (i != 99)
			printf(", ");
	}
	printf("\n");
	return (0);
}
