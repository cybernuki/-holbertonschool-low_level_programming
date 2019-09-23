#include <stdio.h>
#include <ctype.h>

int _islower(int c);

/**
 * main - Entry point
 * Des: main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

int _islower(int c)
{
	int result;

	result = (islower(c) > 0 ? 1 : 0);
	return (result);
}
