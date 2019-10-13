#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 * @argc: size of parameters
 * @argv: string
 * Return: 0 if the programm finished good, 1 in otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int mount = atoi(argv[1]);

		if (mount < 0)
			printf("0\n");
		else
		{
			int i;
			int result = 0;
			int values[] = {25, 10, 5, 2, 1};

			for (i = 0; i < 5; i++)
			{
				result += mount / values[i];
				mount = mount % values[i];
			}
			printf("%d\n", result);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
