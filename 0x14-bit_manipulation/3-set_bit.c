/**
 * set_bit - sets the value of a bit to 1 at given position
 * @n: is the given number
 * @index: is the gicen index
 * Return: if the operation was succed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n += (1 << index);
	return (1);
}
