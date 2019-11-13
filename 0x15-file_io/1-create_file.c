#include "holberton.h"
/**
 * create_file - creates a new fil
 * @filename: name of the new file
 * @text_content: is the text content to add
 * Return: 1 if it was possible, -1 in otherwise;
 */
int create_file(const char *filename, char *text_content)
{
	int f_d, hasW;

	if (!filename)
		return (-1);

	f_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f_d == -1)
		return (-1);

	if (!text_content)
		return (-1);

	hasW = write(f_d, text_content, sizeof(text_content) == -1);

	if (hasW == -1)
		return (-1);

	close(f_d);
	return (1);
}
