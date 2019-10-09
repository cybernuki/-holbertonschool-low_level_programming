int prime(int n, int x);
/**
 * is_prime_number - evaluate if a given number is a prime number
 * @n: a given integer number
 * Return: 1 if the number is prime, 0 in otherwise.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else
		return (prime(n, n - 1));

}
/**
 * prime - find if the given number is a prime number;
 * @n: the given number;
 * @x: a number between n-1 to 0
 * Return: 1 if n is prime, 0 in otherwise.
 */
int prime(int n, int x)
{
	if (x == 0)
		return (0);
	else if (x == 1)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (prime(n, x - 1));

}
