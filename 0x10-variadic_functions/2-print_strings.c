#include "variadic_functions.h"
/**
 * print_strings - it prints strings followed by a new line.
 * @separator: is the separation char to each number
 * @n: it is the number of parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n == 0)
		printf("\n");
	else
	{
		unsigned int i = n;
		va_list ap;
		char *str;

		va_start(ap, n);
		while (i > 0)
		{
			str = va_arg(ap, char*);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i > 1 && separator != NULL)
				printf("%s", separator);
			i--;
		}
		printf("\n");
		va_end(ap);
	}
}
