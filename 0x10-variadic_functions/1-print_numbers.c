/**
 * print_numbers - it prints numbers followeb ny a new line.
 * @separator: is the separation char to each number
 * @n: it is the number of parameters
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		if (n == 0)
			printf("\n");
		else
		{
			unsigned int i = n;
			va_list ap;

			va_init(ap, n);

			while (i > 0)
			{
				printf("%d%s", va_arg(pa, int), separator);
				i--;
			}
			printf("\n");
			va_end(ap);
		}
	}
}
