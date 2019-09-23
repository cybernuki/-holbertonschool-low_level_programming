#include <stdio.h>
#include <stdlib.h>

int print_last_digit(int);
/**
 * main - Entry point
 * Des: main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

int print_last_digit(int c)
{
	int last_digit;

	c = abs(c);
	last_digit = c % 10;
	printf("%d", last_digit);
	return (last_digit);
}
