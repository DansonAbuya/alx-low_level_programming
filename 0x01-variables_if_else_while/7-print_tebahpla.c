#include <stdio.h>

/**
  * main - Outputs the reverse of the alphabet letters
  *
  * Return: Always (Success)
  */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
