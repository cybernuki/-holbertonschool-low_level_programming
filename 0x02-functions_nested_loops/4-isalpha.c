#include <stdio.h>
#include <ctype.h>

int _isalpha(int c);

/**
 * main - Entry point
 * Des: main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

int _isalpha(int c)
{
	int result;

	result = (isalpha(c) > 0 ? 1 : 0);
	return (result);
}
