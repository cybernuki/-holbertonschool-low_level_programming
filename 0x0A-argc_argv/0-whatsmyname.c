#include <stdio.h>
/**
 * main - main function
 * @argc: is the number of the given flags or options
 * @argv: is the pointer to these strings
 * Return: 0 if the programm finish without problems, 1 in otherwhise
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
