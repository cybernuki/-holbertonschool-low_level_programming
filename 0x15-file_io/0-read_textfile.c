#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: how many letters it would print
 * Return: how much bytes it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, hasRead, hasWritten;
	char *buf;

	if (!filename)
		return (0);

	file_d = open(filename,O_RDONLY);
	if (file_d < 0)
		return (0);

	buf = malloc (sizeof(letters) * letters);

	if (!buf)
		return (0);

	hasRead = read(file_d, buf, letters);
	if (hasRead < 0)
	{
		free(buf);
		close(file_d);
		return (0);
	}

	hasWritten = write(STDOUT_FILENO, buf, hasRead);
	if (hasWritten != hasRead)
	{
		free(buf);
		close(file_d);
		return (0);
	}

	free(buf);
	close(file_d);
	return (hasWritten);
}
