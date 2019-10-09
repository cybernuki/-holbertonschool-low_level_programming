int palindrome(char *s, int first, int last);
int _strlen_recursion(char *s);
/**
 * is_palindrome - find if a string can be equals in reverse
 * @s: a pointer to the first value of the string
 * Return: 1 if the string is a palindrome, 0 in otherwise
 */
int is_palindrome(char *s)
{
	int first, last;

	first = 0;
	last = _strlen_recursion(s);
	return (palindrome(s, first, last - 1));
}
/**
 * palindrome - find if a string can be equals in reverse
 * @s: a pointer to the first value of the string
 * @first: is the first index
 * @last: is the last index
 * Return: 1 if the string is a palindrome, 0 in otherwise
 */
int palindrome(char *s, int first, int last)
{
	if (first < last)
	{
		if (s[first] == s[last])
			return (palindrome(s, first + 1, last - 1));
		else
			return (0);
	}
	else
		return (1);
}
/**
 * _strlen_recursion - returns the length of a string, recursively
 * @s: a pointer to the first value of the string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);
        else
                return (_strlen_recursion(s + 1) + 1);
}
