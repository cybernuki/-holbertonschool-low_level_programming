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
	char *p = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
	}
		i++;
	}
	return (p);
}
