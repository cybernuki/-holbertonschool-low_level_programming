int sqrt2(int n, int x);
/**
 * _sqrt_recursion - find the natural square root of a given number
 * @n: a given number
 * Return: the natural root of the given number or -1 if the number is not
 * natural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt2(n, 0));
}
/**
 * sqrt2 - find the sqrt of a given number finding a x number
 * that its pow of 2 is equal to the given number
 * @n: The given number
 * @x: the x numebr
 * Return: -1 if there is no any natural number of n or the x that
 * power times 2 is equal to n
 */
int sqrt2(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (sqrt2(n, x + 1));
}
