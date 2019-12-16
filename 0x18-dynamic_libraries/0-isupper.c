/**
 * _isupper - checks for uppercase character
 * @c: a character
 * Return: 0 if the char is not a uppercase char
 * 1 in otherwise.
 */
int _isupper(int c)
{
	int result;

	result = (c >= 'A' && c <= 'Z') ? 1 : 0;
	return (result);
}
