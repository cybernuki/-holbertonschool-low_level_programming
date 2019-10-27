#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is the char with the defined formats
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	map map[] = {
		{'c', put_char},
		{'i', put_integer},
		{'f', put_float},
		{'s', put_string},
		{'\0', NULL}
	};
	va_list arg;

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (map[j].type)
		{
			if (format[i] == map[j].type)
			{
				map[j].f(arg, format[i + 1] != '\0');
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
/**
 * put_char - prints a char
 * @argument: is the argument to be printed
 * @isSeparation: a byte that says if it needs to print a separation
 * Return: Nothing
 */
void put_char(va_list argument, int isSeparation)
{
	printf("%c", va_arg(argument, int));
	if (isSeparation)
		printf(", ");
}
/**
 * put_string - prints a string
 * @argument: is the argument to be printed
 * @isSeparation: a byte that says if it needs to print a separation
 * Return: Nothing
 */
void put_string(va_list argument, int isSeparation)
{
	char *str = va_arg(argument, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");

	if (isSeparation)
		printf(", ");
}
/**
 * put_float - prints a float
 * @argument: is the argument to be printed
 * @isSeparation: a byte that says if it needs to print a separation
 * Return: Nothing
 */
void put_float(va_list argument, int isSeparation)
{
	printf("%f", va_arg(argument, double));
	if (isSeparation)
		printf(", ");
}
/**
 * put_integer - prints an integer
 * @argument: is the argument to be printed
 * @isSeparation: a byte that says if it needs to print a separation
 * Return: Nothing
 */
void put_integer(va_list argument, int isSeparation)
{
	printf("%d", va_arg(argument, int));
	if (isSeparation)
		printf(", ");
}
