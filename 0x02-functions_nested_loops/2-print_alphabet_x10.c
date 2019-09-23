#include <stdio.h>


void print_alphabet_x10(void);

/**
 * main - Entry point
 * Des: main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 10; i > 0; i--)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
