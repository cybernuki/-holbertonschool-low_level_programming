/**
 * rev_string - reverses a string
 * @s: A string of chars
 * Returns: void
 */
void rev_string(char *s)
{
	char tmp;
	char *first = s;
	char *second = s;

	while (*(second + 1) != '\0')
		second++;


	while (first < second)
	{
		tmp = *first;
		*first = *second;
		*second = tmp;

		first++;
		second--;
	}
}
