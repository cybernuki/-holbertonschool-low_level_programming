/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the given number
 * @index: the given index
 * Return: 1 if it was possible, -1 in otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask <<= index;
	*n = *n & (~mask);
	return (1);
}
