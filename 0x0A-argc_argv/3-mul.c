#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main function
 * @argc: an integer with the number of parameters of the function
 * @argv: a pointer to the strings.
 * Return: 0 if the programm finished without problems, 1 in otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
