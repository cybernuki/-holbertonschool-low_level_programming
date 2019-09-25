#include <stdio.h>
#include <math.h>
/**
 * main - prints the first 98 fibonacci numbers
 * @void: It doesn't recive any parameter
 * Return: 0 - 1 or -1
 */
int main(void)
{
	double phi;
	int i;

	phi = (1 - sqrt(5)) / 2;

	for (i = 1; i <= 99; i++)
	{
		printf("%1.0f",
		       ((pow(phi, i) - pow((phi * -1), (i * -1))) / sqrt(5))
		       * -1);
		if (i < 99)
			printf(", ");
	}
	printf("\n");
	return (0);
}
