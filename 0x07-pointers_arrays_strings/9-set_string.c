/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer that will points another pointer
 * @to: the pointer to be pointed
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
