/**
 * get_bit - gets the value of a bit in a index
 * @n: is the number
 * @index: is the index
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	return (n & 1);
}
