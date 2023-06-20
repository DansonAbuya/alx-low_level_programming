#include <stdio.h>

/**
 *Outputs alphabets in lowercase, followed by a new line.
 */
void getlowercaseAlphabets(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	putchar('\n');
}
