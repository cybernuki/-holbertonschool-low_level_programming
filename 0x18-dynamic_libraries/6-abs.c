/**
 * _abs - give the absolute number of the given number
 * @c: The number
 *
 * Return: a positive number.
 */
int _abs(int c)
{
	int i;

	i = (c < 0) ? (c * -1) : c;
	return (i);
}
