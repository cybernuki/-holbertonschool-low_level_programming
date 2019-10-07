/**
 * rot13 - encondes a string using rot13
 * @s: a string
 * Return: a pointer to the string
 */
char *rot13(char *s)
{
	char first[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char second[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	char *s_copy = s;
	int index;

	while (*s_copy != '\0')
	{
		for (index = 0; first[index] != '\0'; index++)
		{
			if (*s_copy == first[index])
			{
				*s_copy = second[index];
				break;
			}
		}
		s_copy++;
	}
	return (s);
}
