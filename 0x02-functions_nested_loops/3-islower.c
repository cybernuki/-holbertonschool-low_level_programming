#include <ctype.h>
/**
 * _islower - evaluate if the given char is a lowecase letter
 * @c: the char to be evualuate
 *
 * Return: 1 if it is, 0 in otherwise
 */

int _islower(int c)
{
	int result;

	result = (islower(c) > 0) ? 1 : 0;
	return (result);
}
