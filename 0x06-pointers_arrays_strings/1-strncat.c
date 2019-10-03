/**
 * _strncat - contatenates a string or n bytes of one string into another
 * @dest: is the destination string
 * @src: is the sources string
 * @n: are the numbers of bytes
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_copy = dest;
	char *src_copy = src;

	while (*dest_copy != '\0')
		dest_copy++;

	while (n >= 0 && *src_copy != '\0')
	{
		if (n > 0)
		{
			*dest_copy = *src_copy;
		}
		else
		{
			*dest_copy = '\0';
		}
		dest_copy++;
		src_copy++;
		n--;
	}
	return (dest);
}
