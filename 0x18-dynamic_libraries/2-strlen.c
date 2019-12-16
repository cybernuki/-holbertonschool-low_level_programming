/**
 * _strlen - Returns the length of a string
 * @s: is a pointer to the first value of a string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
