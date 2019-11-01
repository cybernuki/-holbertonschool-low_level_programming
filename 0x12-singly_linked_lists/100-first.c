#include <stdio.h>
void im_the_hire(void) __attribute__ ((constructor));


/**
 * im_the_hire - prints something before the main.
 * Return: Nothing
 */
void im_the_hire(void)
{
	printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n");
}
