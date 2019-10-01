/**
 * _strcpy - Copies the string pointed by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 *
 * @dest: is the destination string
 * @src: is the original string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int size, i;

	size = 1;
	while (src[size] != '\0')
	{
		size++;
	}

	for (i = 0; i <= size; i++)
	{
		if (i != size)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
