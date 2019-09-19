#include <stdio.h>
/*Header*/

/*Main function*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for(i = 0; i < 100; i += 10)
		printf("%d", (i/10));
	printf("\n");
	return (0);
}
