 #include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers
 * @void: does not recive any parameter
 * Return: 0 - 1 or -1
 */
int main(void)
{
	long long int f_1, f_2, fibonacci_number;
	int i;

	f_1 = 0;
	f_2 = 1;

	for (i = 1; i <= 50; i++)
	{
		fibonacci_number = f_1 + f_2;
		printf("%lli", fibonacci_number);
		if (i < 50)
			printf(", ");
		f_1 = f_2;
		f_2 = fibonacci_number;
	}
	printf("\n");
	return (0);
}
