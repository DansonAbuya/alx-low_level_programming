#include <stdio.h>

/**
 * main - Outputs lowercase and uppercase letters
 * Return: Always (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
