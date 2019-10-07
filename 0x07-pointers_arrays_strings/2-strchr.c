/**
 * _strchr - Locates a character in a string
 * @s: a string;
 * @c: character to be searched
 * Return: a pointer to to first ocurrence or the same pointer with the null
 *         reference.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		return (0);
	}

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}


	return (0);
}
