/**
 * leet - encodes a string into 1337
 * @s: a string
 * Return: a pointer to the string
 */
char *leet (char *s)
{
	char *s_copy = s;
	char leet[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	int index;

	while (*s_copy != '\0')
	{
		for (index = 0; index < 5; index++)
		{
			if (*s_copy == lower[index] || *s_copy == upper[index])
			{
				*s_copy = leet[index];
				break;
			}
		}
		s_copy++;
	}
	return (s);
}
