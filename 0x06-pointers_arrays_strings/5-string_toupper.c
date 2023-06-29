#include "main.h"

/**
  * string_toupper -Turns lowercase letters to uppercase
  * @p: The string whose characters modified
  *
  * Return: char p
  */
char *string_toupper(char *p)
{
	int l = 0;

	while (p[l])
	{
		if (p[l] >= 97 && p[l] <= 122)
		{
			p[l] -= 32;
		}

		l++;
	}

	return (p);
}
