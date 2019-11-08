/**
 * flip_bits - find how many bits you would need to flip to get
 * from one number to another.
 * @n: is the first number
 * @m: is the number to convert
 * Return: how many bits you would need to flip to get another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int operation, mask = 1, bits = 0;

	operation = n ^ m;

	for (mask <<= 63; mask ; mask >>= 1)
	{
		if ((operation & mask) != 0)
			bits++;
	}

	return (bits);
}
