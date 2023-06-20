#include <stdio.h>

/**
 * Outputs lowercase alphabets followed by a new line.
 */
void print_alphabet()
{
	char l;

	for (l = 'a'; l <= 'z';l++)
	{
		putchar(l);
	}
	putchar('\n');
}
