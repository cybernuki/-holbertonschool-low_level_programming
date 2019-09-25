#include <stdio.h>
/**
 * main - prints all even-value fibonacci numbers less than 4.000.000
 * @void: It doesn't recive any parameter
 * Return: 0 - 1 or -1
 */
int main(void)
{
	unsigned long int f_1, f_2, fibonacci_number;

	f_1 = 0;
	f_2 = 1;
	fibonacci_number = 0;

	while (fibonacci_number < 4000000)
	{
		fibonacci_number = f_1 + f_2;

		if (fibonacci_number % 2 == 0)
		{
			printf("%lu", fibonacci_number);

			if ((f_2 + fibonacci_number) < 4000000)
				printf(", ");
		}
		f_1 = f_2;
		f_2 = fibonacci_number;
	}
	printf("\n");
	return (0);
}
