/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if are the same in size,a number greater than 0 if
 * it is greater or a number less that 0 in otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int size_s1 = 0;
	int size_s2 = 0;

	while (*(s1 + size_s1) != '\0')
		size_s1++;

	while (*(s2 + size_s2) != '\0')
		size_s2++;

	result = (size_s1 < size_s2) ? -15 : 15;

	return (result);
}
