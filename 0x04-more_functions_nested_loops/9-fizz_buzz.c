#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz insted the number
 * and for the multiples of five print Buzz. For numbers wich
 * are multiples of both three and five print FizzBuzz
 * followed by a new line. Also, don't print 2 and 4
 * @void: no parameter
 * Return: 1 - 0 or  -1
 */
int main(void)
{
	int  i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
