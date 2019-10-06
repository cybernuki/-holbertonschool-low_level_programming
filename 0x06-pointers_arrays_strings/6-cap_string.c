/**
 * isSpecial - evaluate if the char is a special char
 * @letter: a char
 * Return: 0 if it is not a special char, 1 in otherwise
 */
int isSpecial(char letter)
{
	int result = 0;
	char specials = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			 '(', ')', '{', '}');
	int i;

	for (i = 0; i < 13; i++)
	{
		if (letter == specials[i])
		{
			result = 1;
			break;
		}
	}
	return (result);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: a string
 * Return: a pointer to the string
 */
char *cap_string(char *s)
{
	char *s_copy = s;

	if (*s_copy >= 'a' && *s_copy <= 'z')
		*s_copy = *s_copy - 32;

	s_copy++;
	while (*s_copy != '\0')
	{
		if (isSpecial(*(s_copy - 1))  && *s_copy >= 'a'
		    && *s_copy <= 'z')
		{
			*s_copy = *s_copy - 32;
		}
		s_copy++;
	}
	return (s);
}
