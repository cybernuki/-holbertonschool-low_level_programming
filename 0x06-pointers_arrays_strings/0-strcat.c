/**
 * _strcat - Concatenates two strings.
 * @dest: string target.
 * @src: string origin.
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_copy = dest;

	while (*dest_copy != '\0')
		dest_copy++;

	while (*src != '\0')
	{
		*dest_copy = *src;

		dest_copy++;
		src++;
	}

	return (dest);
}
