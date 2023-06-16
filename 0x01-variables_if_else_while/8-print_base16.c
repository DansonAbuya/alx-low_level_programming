#include <stdio.h>

/**
  * main -Outputs all numbers of base 16/hexadecimal in lowercase
  *
  * Return: Always (Success)
  */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
