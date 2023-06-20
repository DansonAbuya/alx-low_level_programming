#include <stdio.h>

/**
 *Outputs alphabets in lowercase, followed by a new line.
 */
void alphabet_in_lowercase(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
