#include <stdio.h>

/**
 * main - Print the sum of all numbers that are
 * divisible by 3 and 5
 *
 * @void: doesn't recive parameters
 *
 * Return: 0, 1 or -1
 */
int main(void)
{
	int i, result;

	result = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result += i;
		}
	}
	printf("%d\n", result);

	return (0);
}
