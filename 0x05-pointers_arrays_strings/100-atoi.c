/**
 * _atoi - convert a string to an integer.
 * @s: is a String of chars
 * Return: return the integer representation
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] < '0' && s[i] > '9')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			sign *= 1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
	}


	return (res);
}
