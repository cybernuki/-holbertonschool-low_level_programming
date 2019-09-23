#include <stdio.h>
#include <ctype.h>

int print_sign(int n);

/**
 * main - Entry point
 * Des: main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

int print_sign(int c)
{
	int result;

	if (c > 0)
	{
		result = 1;
		putchar('+');
	}
	else if (c < 0)
	{
		result = -1;
		putchar('-');
	}
	else
	{
		result = 0;
		putchar('0');
	}
	return (result);
}
