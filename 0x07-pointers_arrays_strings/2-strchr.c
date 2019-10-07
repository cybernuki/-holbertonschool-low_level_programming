/**
 * _strchr - Locates a character in a string
 * @s: a string;
 * @c: character to be searched
 * Return: a pointer to to first ocurrence or the same pointer with the null
 *         reference.
 */
char *_strchr(char *s, char c)
{

	while (*s != c)
	{
		if (*s == '\0')
			break;
		s++;
	}

	return (s);
}
