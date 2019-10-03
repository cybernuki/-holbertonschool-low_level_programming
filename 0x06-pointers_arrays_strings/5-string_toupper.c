/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 * Return: the pointer of the start of the string
 */
char *string_toupper(char *s)
{
	char *s_copy = s;

	while (*s_copy != '\0')
	{
		if (*s_copy >= 'a' && *s_copy <= 'z')
		{
			*s_copy = *s_copy - 32;
		}
		s_copy++;
	}

	return (s);
}
