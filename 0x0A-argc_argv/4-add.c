#include <stdio.h>
#include <stdlib.h>
int _isdigit(char *c);
/**
 * main - Main function
 * @argc: an integer with the number of parameters of the function
 * @argv: a pointer to the strings.
 * Return: 0 if the programm finished without problems, 1 in otherwise
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;

	while (count < argc)
	{
		if (_isdigit(argv[count]))
		{
			sum += atoi(argv[count]);
			count++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * _isdigit - checks for a digit (0 trough 9)
 * @c: the char to be checked
 * Return: 0 if it is a digit. 1 in otherwise.
 */
int _isdigit(char *c)
{
	int result;

	result = (*c == '\0') ? 0 : 1;

	while (*c != '\0' && result)
	{
		result = (*c >= '0' && *c <= '9') ? 1 : 0;
		c++;
	}

	return (result);
}
