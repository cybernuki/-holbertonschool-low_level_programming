#include "holberton.h"
/**
 * create_file - creates a new fil
 * @filename: name of the new file
 * @text_content: is the text content to add
 * Return: 1 if it was possible, -1 in otherwise;
 */
int create_file(const char *filename, char *text_content)
{
	int f_d, hasW, size = 0;

	if (filename == NULL)
		return (-1);

	f_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f_d == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[size] != '\0')
		size++;

	hasW = write(f_d, text_content, size);

	if (hasW == -1)
	{
		close(f_d);
		return (-1);
	}
	close(f_d);
	return (1);
}
