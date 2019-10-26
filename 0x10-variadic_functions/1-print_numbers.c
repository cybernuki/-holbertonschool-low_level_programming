#include "variadic_functions.h"
/**
 * print_numbers - it prints numbers followeb ny a new line.
 * @separator: is the separation char to each number
 * @n: it is the number of parameters
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n == 0)
		printf("\n");
	else
	{
		unsigned int i = n;
		va_list ap;

		va_start(ap, n);

		while (i > 0)
		{
			printf("%d", va_arg(ap, int));

			if (i > 1 && separator != NULL)
				printf("%s", separator);
			i--;
		}
		printf("\n");
		va_end(ap);
	}

}
