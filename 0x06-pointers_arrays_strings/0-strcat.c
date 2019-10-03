/**
 * _strcat - Concatenates two strings.
 * @dest: string target.
 * @src: string origin.
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}

	return (dest);
}
