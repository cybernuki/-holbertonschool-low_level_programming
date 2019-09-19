#include <stdio.h>
/*Headers*/

/*main function*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int i1;
	int j1;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (i1 = i; i1 <= '9'; i1++)
			{
				for (j1 = (j + 1); j1 <= '9'; j1++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(i1);
					putchar(j1);
					if (i < '9' || j < '9' || i1 < '9' || j1 < '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
