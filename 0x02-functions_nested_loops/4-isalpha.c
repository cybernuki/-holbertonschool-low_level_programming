#include <ctype.h>
/**
 * _isalpha - evaluate if a giving char is a alphanumeric
 * @c: The character to evaluate
 *
 * Return: 1 if it is; 0 in otherwise
 */
int _isalpha(int c)
{
	int result;

	result = (isalpha(c) > 0 ? 1 : 0);
	return (result);
}
