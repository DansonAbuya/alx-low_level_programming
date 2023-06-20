#include <stdio.h>

/**
 *Outputs alphabets in lowercase, followed by a new line.
 */
void alphabet_in_lowercase(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	putchar('\n');
}
