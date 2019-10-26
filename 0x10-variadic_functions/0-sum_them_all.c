#include "variadic_functions.h"
/**
 * sum_them_all - it sums all of its parameters
 * @n: number of parameters
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i > 0)
	{
		sum += va_arg(ap, int);
		i--;
	}


	va_end(ap);
	return (sum);
}
