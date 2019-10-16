#include "holberton.h"
int _strlen_recursion(char *s);
int find_strings(char *str);
char *find_sub(char *str, int coincidence);
void fill_string(char *dest, char *origin, int size);

/**
 * strtow - split a string in spaces
 * @str: the string
 * Return: a pointer to the other strings
 */
char **strtow(char *str)
{
	if (str != NULL && *str != '\0')
	{
		char **matrix;
		int rows;
		int columns = 0;

		rows = find_strings(str);
		matrix = (char **) malloc(sizeof(*matrix) * rows);
		if (matrix != NULL)
		{
			int i = 0;
			char *sub_str;

			while (i < rows)
			{
				sub_str = find_sub(str, i + 1);
				columns = _strlen_recursion(sub_str);
				matrix[i] = (char *) malloc(columns);
				if(matrix[i] != NULL)
				{
					fill_string(matrix[i],
						    sub_str, columns);
				}
				else
					return (NULL);
				i++;
			}
			return (matrix);
		}
		return (NULL);
	}
	return (NULL);
}
/**
 * _strlen_recursion - returns the length of a string, recursively
 * @s: a pointer to the first value of the string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (_strlen_recursion(s + 1) + 1);
}

int find_strings(char *str)
{
	int i = 0;
	int amount = 0;

	while (str[i] != '\0')
	{
		if (str[i]!= ' ')
		{
			amount++;
			while (str[i] != ' ')
				i++;
		}
		i++;
	}
	return (amount);
}
/**
 * find_sub - find the n substring of a string
 * @str: is the string
 * @coincidence: is the n substring to find
 * Return: a pointer to the star of the substring or NULL if does
 * find anything
 */
char *find_sub(char *str, int coincidence)
{
	int i = 0;
	int find = 0;

	while (str[i] != '\0')
	{
		if (str[i]!= ' ')
		{
			find++;
			if (find != coincidence)
			{
				while (str[i] != ' ')
					i++;
			}
			else
				return (str + i);
		}
		i++;
	}
	return (NULL);

}

void fill_string(char *dest, char *origin, int size)
{
	int i;

	for (i = 0; i <= size; i++)
	{
		dest[i] = origin[i];
	}
}
