#include "holberton.h"

/**
 * exceptionClose - verify if it is possible the close of a file descriptor
 * @result: is the result of the operation
 * @file: the name of the file
 * Return: Nothing
 */
void exceptionClose(int result, char *file)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
		exit(100);
	}
}

/**
 * exceptionWrite - Executes the exception when write operation fails
 * @str: is the name of the file
 * Return: Nothing
 */
void exceptionWrite(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
 * exceptionRead - Exeutes the exception when read operation fails
 * @str: the name of the file
 * Return: Nothing
 */
void exceptionRead(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * main - copy files
 * @argc: how many arguments there is
 * @argv: arguments
 * Return: 0 if it were success, -1 in otherwise
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, hasR, hasW;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		exceptionRead(argv[1]);

	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
		exceptionWrite(argv[2]);

	hasR = read(f_from, buff, 1024);
	while (hasR > 0)
	{
		hasW = write(f_to, buff, hasR);
		if (hasW == -1)
			exceptionWrite(argv[2]);
		hasR = read(f_from, buff, 1024);
	}

	if (hasR == -1)
		exceptionRead(argv[1]);
	exceptionClose(close(f_from), argv[1]);
	exceptionClose(close(f_to), argv[2]);
	return (0);
}
