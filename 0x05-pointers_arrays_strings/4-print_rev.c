#include "main.h"
#include <stdio.h>

/**
  * print_rev - Outputs the reverse of a string
  * @s: The string to print the reverse
  *
  * Return: void
  */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (l -= 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
