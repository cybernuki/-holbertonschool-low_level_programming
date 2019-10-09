/**
 * factorial - returns the factorial of a given number
 * @n: is the number
 * Return: returns the factorial of the given number
 * in case that the number is less than 0, it will return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
