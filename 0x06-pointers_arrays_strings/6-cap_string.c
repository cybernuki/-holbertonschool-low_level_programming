/**
 * cap_string - capitalizes all words of a string
 * @s: a string
 * Return: a pointer to the string
 */
int isUpper(char letter)
{
	return ((letter >= 'A' && letter <= 'Z'));
}

int isLower(char letter)
{

	return ((letter >= 'a' && letter <= 'z'));
}

char *cap_string(char *s)
{
	char *s_copy = s;

	if (isLower(*(s_copy)))
		*s_copy = *s_copy - 32;

	s_copy++;
	while (*s_copy != '\0')
	{
		if (!isLower(*(s_copy - 1)) && !isUpper(*(s_copy - 1))
		    && isLower(*(s_copy)))
		{
			*s_copy = *s_copy - 32;
		}
		s_copy++;
	}
	return (s);
}
