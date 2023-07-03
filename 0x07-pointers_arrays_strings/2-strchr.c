#include "main.h"

/**
  * _strchr -function that  locates the character in string
  * @s: source string from which the character is located
  * @c: character to find
  *
  * Return: the string  located
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}

