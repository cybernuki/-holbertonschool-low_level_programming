#include <stdio.h>
/**
 * main - Main function
 * @argc: an integer with the number of parameters of the function
 * @argv: a pointer to the strings.
 * Return: 0 if the programm finished without problems, 1 in otherwise
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);


	return (0);
}
