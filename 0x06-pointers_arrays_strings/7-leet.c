#include "main.h"

/**
  * leet - encodes the input string into 1337
  * @s:  string to be encoded
  *
  * Return: encoded string
  */
char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char c[5] = {'A', 'E', 'O', 'T', 'L'};
	char d[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == r[b] || s[a] - 32 == c[b])
			{
				s[a] = d[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}

