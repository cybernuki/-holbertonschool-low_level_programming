/**
 * _isdigit - checks for a digit (0 trough 9)
 * @c: the char to be checked
 * Return: 0 if it is a digit. 1 in otherwise.
 */
int _isdigit(int c)
{
	int result;

	result = (c >= '0' && c <= '9') ? 1: 0;
	return (result);
}
