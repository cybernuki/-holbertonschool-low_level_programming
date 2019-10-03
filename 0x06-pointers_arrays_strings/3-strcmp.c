/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if are the same in size,a number greater than 0 if
 * it is greater or a number less that 0 in otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	return (0);
}
