/**
 * _strncpy - copis a string or n bytes into other
 * @dest: destination string
 * @src: src string
 * @n: number of bytes to be copied
 * Return:
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i ) = *(src + i);

	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
